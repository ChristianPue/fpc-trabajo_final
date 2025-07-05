#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;
using ll = long long;

const int MAXN = 2e5 + 5;

struct FenwickTree {
  vector<int> bit;
  int n;
  
  FenwickTree(int size) : n(size), bit(size + 1, 0) {}
  
  void update(int index, int delta) {
    for (; index <= n; index += index & -index)
      bit[index] += delta;
  }

  int query(int index) const {
    int sum = 0;

    for (; index > 0; index -= index & -index)
      sum += bit[index];
    
    return sum;
  }

  int range_sum(int l, int r) const {
    return query(r) - query(l - 1);
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  
  int n = s.size();
  string rev = s;
  
  reverse(rev.begin(), rev.end());
  
  // Guardar las posiciones de cada carácter en s
  map<char, deque<int>> pos;
  
  for (int i = 0; i < n; ++i) {
    pos[s[i]].push_back(i + 1); // 1-based index para Fenwick
  }
  
  FenwickTree bit(n);
  
  ll total_swaps = 0;
  
  for (int i = 0; i < n; ++i) {
    char c = rev[i];
    int original_pos = pos[c].front();
    pos[c].pop_front();
    
    // Cuántos elementos ya fueron movidos antes de original_pos
    int moved_before = bit.query(original_pos - 1);
    
    // Cuántos swaps necesitamos para mover original_pos a su nueva posición (i+1)
    total_swaps += original_pos - 1 - moved_before;
    bit.update(original_pos, 1);
  }
  
  cout << total_swaps << '\n';
  
  return 0;
}