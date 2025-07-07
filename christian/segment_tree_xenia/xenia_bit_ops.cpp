#include <iostream>
#include <vector>
using namespace std;

struct SegmentTree {
  int n;
  vector<int> tree;
  bool toggle; // true -> or, false -> xor

  SegmentTree(const vector<int>& arr) {
    n = arr.size();
    tree.resize(2 * n);
    for (int i = 0; i < n; ++i) {
      tree[n + i] = arr[i];
    }
    toggle = (int)(__builtin_ctz(n)) % 2 == 1; // nivel raíz
    build();
  }

  void build() {
    bool op = toggle;
    for (int i = n - 1; i >= 1; --i) {
      if (op) { 
        tree[i] = tree[i << 1] | tree[i << 1 | 1]; 
      }
      else {
        tree[i] = tree[i << 1] ^ tree[i << 1 | 1];
      }
      if ((i & (i - 1)) == 0) // si i es potencia de 2, cambia de nivel
      { op = !op; }
    }
  }

  void update(int idx, int value) {
    idx += n;
    tree[idx] = value;
    bool op = toggle;
    while (idx > 1) {
      idx >>= 1;
      if (op)
        { tree[idx] = tree[idx << 1] | tree[idx << 1 | 1]; }
      else
        { tree[idx] = tree[idx << 1] ^ tree[idx << 1 | 1]; }
      op = !op;
    }
  }

  int result() const {
    return tree[1];
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
