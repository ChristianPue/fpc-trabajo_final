# 📝 Statement – Design Search Autocomplete System (LeetCode 642)

## 🧩 Descripción del Problema

Diseña un sistema de autocompletado para un motor de búsqueda. El sistema debe sugerir las **3 frases históricas más populares** que coincidan con el prefijo que el usuario ha escrito hasta el momento.

El sistema se inicializa con un conjunto de frases previamente ingresadas (`sentences`) y la cantidad de veces que cada una fue escrita (`times`).

---

## 📥 Entrada

- Inicialización:
  - `sentences`: arreglo de strings con frases históricas.
  - `times`: arreglo de enteros con la frecuencia de cada frase.

- Luego, el sistema recibe múltiples llamadas a `input(c)` donde:
  - `c` es un carácter (`a`–`z`, espacio `' '`, o `'#'`).
  - Si `c == '#'`, la frase actual se considera completa y se guarda en el historial.
  - Si `c != '#'`, se devuelve una lista con las **3 frases más populares** que comienzan con el prefijo actual.

---

## 📤 Salida

- Para cada llamada a `input(c)` donde `c != '#'`, devuelve una lista con hasta 3 frases que:
  1. Comienzan con el prefijo actual.
  2. Tienen mayor frecuencia de uso.
  3. En caso de empate, se ordenan lexicográficamente.

- Para `input('#')`, devuelve una lista vacía y guarda la frase actual en el historial.

---

## 🧠 Ejemplo

### Entrada:
```plaintext
AutocompleteSystem(["i love you", "island", "iroman", "i love leetcode"], [5, 3, 2, 2])
input('i') → ["i love you", "island", "i love leetcode"]
input(' ') → ["i love you", "i love leetcode"]
input('a') → []
input('#') → []
