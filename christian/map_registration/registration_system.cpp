#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  // Mapa que almacena la cantidad de veces que se ha usado cada nombre base
  map<string, int> registrados;

  while (n--) {
    string nombre;
    cin >> nombre;

    // Si el nombre no está registrado aún (valor por defecto es 0)
    if (registrados[nombre] == 0) {
      cout << "OK" << endl;        // Se acepta tal cual
      registrados[nombre] = 1;     // Se marca como registrado
    } else {
      // Ya existe el nombre, se crea una sugerencia única
      string nuevoNombre = nombre + to_string(registrados[nombre]);
      cout << nuevoNombre << endl;

      // Se marca el nuevo nombre como usado (no se volverá a usar esa sugerencia)
      registrados[nuevoNombre] = 1;

      // Incrementamos el contador del nombre original para que la siguiente sugerencia avance
      registrados[nombre]++;
    }
  }

  return 0;
}