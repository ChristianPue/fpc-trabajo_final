#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
using ll = long long;

const ll INF = (ll)1e18;

int n, K;
vector<int> a;
vector<int> cnt;
int L = 1, R = 0;
ll curr_cost = 0;

// Mueve el subsegmento [L, R] a [l, r] y actualiza el costo
void move(int l, int r) {
  while (R < r) curr_cost += cnt[a[++R]]++;
  while (R > r) curr_cost -= --cnt[a[R--]];
  while (L < l) curr_cost -= --cnt[a[L++]];
  while (L > l) curr_cost += cnt[a[--L]]++;
}

vector<ll> dp_prev, dp_cur;

// Divide y conquista para calcular dp[i][*]
void solve(int l, int r, int optl, int optr) {
  if (l > r) return;
  
  int mid = (l + r) / 2;
  pair<ll, int> best = {INF, -1};

  for (int j = optl; j <= min(mid - 1, optr); ++j) {
    move(j + 1, mid);
    ll cost = dp_prev[j] + curr_cost;

    if (cost < best.first) {
      best = {cost, j};
    }
  }
  
  dp_cur[mid] = best.first;
  int opt = best.second;

  solve(l, mid - 1, optl, opt);
  solve(mid + 1, r, opt, optr);
}

int main() {
  ios::sync_with_stdio(false);
  
  cin.tie(nullptr);
  cin >> n >> K;
  
  a.resize(n + 1);
  cnt.assign(n + 1, 0);
  
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
  }
  
  dp_prev.assign(n + 1, INF);
  dp_cur.assign(n + 1, INF);
  dp_prev[0] = 0;

  for (int k = 1; k <= K; ++k) {
    fill(cnt.begin(), cnt.end(), 0);
    
    L = 1;
    R = 0;
    curr_cost = 0;
    
    fill(dp_cur.begin(), dp_cur.end(), INF);
    solve(1, n, 0, n - 1);

    dp_prev.swap(dp_cur);
  }

  cout << dp_prev[n] << '\n';
  return 0;
}