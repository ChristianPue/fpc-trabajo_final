#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct TrieNode {
  TrieNode* children[26];
  bool is_end;

  TrieNode() {
    is_end = false;
    for (int i = 0; i < 26; ++i) {
      children[i] = nullptr;
    }
  }
};

class Trie {
private:
  TrieNode* root;

public:
  Trie() {
    root = new TrieNode();
  }

  // Inserta palabra. Retorna true si hay conflicto.
  bool insert(const string& word) {
    TrieNode* node = root;
    for (char c : word) {
      int idx = c - 'a';
      if (!node->children[idx]) {
        node->children[idx] = new TrieNode();
      }

      node = node->children[idx];
      if (node->is_end) { return true; } // otra palabra termina aquí → conflicto
    }

    // Si tiene hijos, esta palabra es prefijo de otra
    for (int i = 0; i < 26; ++i) {
      if (node->children[i]) { return true; }
    }

    node->is_end = true;
    return false;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;

  Trie trie;
  string word;
  for (int i = 0; i < n; ++i) {
    cin >> word;
    
    if (trie.insert(word)) {
      cout << "BAD SET\n" << word << '\n';
      return 0;
    }
  }
  
  cout << "GOOD SET\n";
  return 0;
}