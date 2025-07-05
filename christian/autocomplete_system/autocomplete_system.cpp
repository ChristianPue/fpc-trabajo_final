#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
#include <algorithm>

using namespace std;

struct Node {
  char c;
  int freq;
  string word;
  Node *left, *mid, *right;

  Node(char c) : c(c), freq(0), word(""), left(nullptr), mid(nullptr), right(nullptr) {}
};

class TreeTB {
private:
  Node* root = nullptr;
  string current_input;
  unordered_map<string, int> frequency;

  Node* insert(Node* node, const string& word, int d, int freq) {
    char ch = word[d];
    if (!node) {
      node = new Node(ch);
    }
    
    if (ch < node->c) {
      node->left = insert(node->left, word, d, freq);
    } 
    else if (ch > node->c) {
      node->right = insert(node->right, word, d, freq);
    } 
    else {
      if (d + 1 == word.size()) {
        node->freq = freq;
        node->word = word;
      } else {
        node->mid = insert(node->mid, word, d + 1, freq);
      }
    }
    return node;
  }

  Node* get(Node* node, const string& prefix, int d) {
    if (!node) return nullptr;
    char ch = prefix[d];
    
    if (ch < node->c)  { return get(node->left, prefix, d); }
    else if (ch > node->c) { return get(node->right, prefix, d); }
    else {
      if (d + 1 == prefix.size()) return node;
      return get(node->mid, prefix, d + 1);
    }
  }

  void collect(Node* node, priority_queue<pair<int, string>>& pq) {
    if (!node) { return; }
    
    if (node->freq > 0) {
      pq.push({-node->freq, node->word});
      if (pq.size() > 3) pq.pop();
    }

    collect(node->left, pq);
    collect(node->mid, pq);
    collect(node->right, pq);
  }

public:
  TreeTB(const vector<string>& sentences, const vector<int>& times) {
    for (int i = 0; i < sentences.size(); ++i) {
      frequency[sentences[i]] = times[i];
      root = insert(root, sentences[i], 0, times[i]);
    }
  }

  vector<string> input(char c) {
    if (c == '#') {
      frequency[current_input]++;
      root = insert(root, current_input, 0, frequency[current_input]);
      current_input.clear();
      return {};
    }

    current_input += c;
    Node* node = get(root, current_input, 0);
    if (!node) return {};

    priority_queue<pair<int, string>> pq;
    if (node->freq > 0) pq.push({-node->freq, node->word});
    collect(node->mid, pq);

    vector<string> res;
    while (!pq.empty()) {
      res.push_back(pq.top().second);
      pq.pop();
    }

    reverse(res.begin(), res.end());
    
    return res;
  }
};

int main() {
  vector<string> sentences = {"i love you", "island", "iroman", "i love leetcode"};
  vector<int> times = {5, 3, 2, 2};

  TreeTB system(sentences, times);
  
  vector<char> inputs = {'i', ' ', 'a', '#', 'i', ' '};
  for (char c : inputs) {
    vector<string> res = system.input(c);
    if (c != '#') {
      for (const string& s : res) cout << s << " | ";
      cout << '\n';
    }
  }
  return 0;
}
