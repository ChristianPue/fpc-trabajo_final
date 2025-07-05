#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string s;
  cin >> s;
  
  int n = s.size();

  // Paso 1: Calcular el arreglo de prefijos (pi)
  vector<int> pi(n, 0);

  for (int i = 1; i < n; ++i) {
    int j = pi[i - 1];
    while (j > 0 && s[i] != s[j]) {
      j = pi[j - 1];
    }

    if (s[i] == s[j]) {
      ++j;
    }

    pi[i] = j;
  }

  // Paso 2: Contar ocurrencias de cada prefijo como subcadena
  vector<int> count(n + 1, 0);
  for (int i = 0; i < n; ++i) {
    count[pi[i]]++;
  }
  
  // Paso 3: Propagar los conteos hacia prefijos más cortos
  for (int i = n; i > 0; --i) {
    count[i - 1] += count[i];
  }

  // Cada prefijo aparece al menos una vez (en su posición final)
  for (int i = 1; i <= n; ++i) {
    count[i]++;
  }

  // Paso 4: Recorrer prefijos que también son sufijos
  vector<pair<int, int>> result;
  int k = n;

  while (k > 0) {
    result.emplace_back(k, count[k]);
    k = pi[k - 1];
  }
  // Paso 5: Imprimir resultados en orden creciente
  sort(result.begin(), result.end());
  cout << result.size() << '\n';

  for (auto& p : result) {
    int len = p.first;
    int freq = p.second;
    cout << len << ' ' << freq << '\n';
  }

  return 0;
}
