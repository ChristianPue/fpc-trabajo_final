// cyclic_permutations.cpp
// Problema: Cyclic Permutations (HackerEarth)
// Autor: Christian

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Función para construir el arreglo Z
vector<int> computeZ(const string& s) {
  int n = s.size();
  vector<int> z(n, 0);
  int l = 0, r = 0;

  for (int i = 1; i < n; ++i) {
    if (i <= r) {
      z[i] = min(r - i + 1, z[i - l]);
    }
    
    while (i + z[i] < n && s[z[i]] == s[i + z[i]])
    {
      ++z[i];
    }

    if (i + z[i] - 1 > r)
    {
      l = i, r = i + z[i] - 1;
    }
  }

  return z;
}

int countCyclicMatches(const string& A, const string& B) {
  string BB = B + B;
  string pattern = A + "$" + BB.substr(0, BB.size() - 1); // evitar rotación completa duplicada
  
  vector<int> z = computeZ(pattern);
  int count = 0;
  int len = A.size();
  
  for (int i = len + 1; i < z.size(); ++i) {
    if (z[i] == len) {
      count++;
    }
  }
  
  return count;
}

int main() {
  int T;
  cin >> T;
  
  while (T--) {
    string A, B;
    cin >> A >> B;
    
    cout << countCyclicMatches(A, B) << '\n';
  }
  
  return 0;
}
