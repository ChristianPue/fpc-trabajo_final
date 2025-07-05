#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, int> registrados; // Mapa para almacenar nombres y su conteo

  while (n--)
  {
    string nombre;
    cin >> nombre;

    // Verificar si el nombre ya está registrado
    if (registrados[nombre] == 0) {
      cout << "OK" << endl; // Nombre nuevo
      registrados[nombre] = 1 ; // Marcar como registrado
    }
    else {
      // Generar un nuevo nombre
      int contador = registrados[nombre];
      string nuevoNombre;
      
      // Buscar un nuevo nombre que no esté registrado
      do {
        nuevoNombre = nombre + to_string(contador);
        contador++;
      } while (registrados[nuevoNombre] > 0);
      
      cout << nuevoNombre << endl; // Imprimir el nuevo nombre
      registrados[nuevoNombre] = 1; // Marcar el nuevo nombre como registrado
      registrados[nombre] = contador; // Actualizar el contador para el nombre base
    }
  }

  return 0;
}