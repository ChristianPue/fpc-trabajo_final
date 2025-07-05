#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Node {
  int value;
  Node(int v = 0) : value(v) {}
};

// Determina si aplicar OR o XOR según la profundidad actual
Node ope(Node a, Node b, int depth) {
  if (depth % 2 == 0) {
    return Node(a.value ^ b.value);
  } else {
    return Node(a.value | b.value);
  }
}

struct SegmentTree {
  int n;
  vector<Node> tree;
  int levels;

  SegmentTree(const vector<int>& arr) {
    n = arr.size();
    levels = __builtin_ctz(n); // log2(n)
    tree.resize(2 * n);
    build(arr);
  }
  
  void build(const vector<int>& arr) {
    for (int i = 0; i < n; ++i) {
      tree[n + i] = Node(arr[i]);
    }
    for (int i = n - 1; i >= 1; --i) {
      int depth = levels - __builtin_ctz(i);

      tree[i] = ope(tree[i << 1], tree[i << 1 | 1], depth);
    }
  }

  void update(int index, int value) {
    index += n;
    tree[index] = Node(value);
    while (index > 1) {
      index >>= 1;
      
      int depth = levels - __builtin_ctz(index);
      tree[index] = ope(tree[index << 1], tree[index << 1 | 1], depth);
    }
  }
  
  int result() const {
    return tree[1].value;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int m, q;
  cin >> m >> q;
  
  int n = 1 << m;
  vector<int> arr(n);
  
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  
  SegmentTree st(arr);
  
  while (q--) {
    int p, b;
    cin >> p >> b;
    
    st.update(p - 1, b);
    
    cout << st.result() << '\n';
  }
  
  return 0;
}
