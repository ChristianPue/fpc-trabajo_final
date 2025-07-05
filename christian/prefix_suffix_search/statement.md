# 📝 Statement – Prefixes and Suffixes (Codeforces 432D)

## 🧩 Descripción del Problema

Dado un string `s` compuesto por letras mayúsculas, se desea encontrar todos los **prefijos** de `s` que también son **sufijos** (sin ser el string completo necesariamente), y para cada uno de ellos, contar cuántas veces aparece como **subcadena** dentro de `s`.

---

## 📥 Entrada

- Una sola línea con el string `s`  
  `(1 ≤ |s| ≤ 10⁵)`  
  El string contiene únicamente letras mayúsculas del alfabeto inglés (`A`–`Z`).

---

## 📤 Salida

- En la primera línea, imprime un entero `k` — la cantidad de prefijos que también son sufijos.
- Luego imprime `k` líneas, cada una con dos enteros `lᵢ` y `cᵢ`, donde:
  - `lᵢ` es la longitud del prefijo que también es sufijo.
  - `cᵢ` es la cantidad de veces que dicho prefijo aparece como subcadena en `s`.

Los pares deben imprimirse en orden creciente de `lᵢ`.

---

## 🧠 Ejemplo

### Entrada:
ABACABA  

### Salida:
3  
1 4  
3 2  
7 1  

### Explicación:
- `"A"` (longitud 1) aparece 4 veces.
- `"ABA"` (longitud 3) aparece 2 veces.
- `"ABACABA"` (longitud 7) aparece 1 vez.

---

## 💡 Enfoque con KMP

- Se construye el arreglo de prefijos `pi[]` del algoritmo **KMP**.
- A partir de `pi[n-1]`, se recorren los prefijos que también son sufijos usando saltos `pi[pi[i]]`.
- Se utiliza un arreglo `cnt[]` para contar cuántas veces aparece cada prefijo como subcadena.
- Finalmente, se imprime la lista de longitudes y sus frecuencias acumuladas.

Este enfoque tiene complejidad **O(n)** y es ideal para practicar el uso avanzado del arreglo de prefijos de KMP.

---

## 🧵 Ruta del archivo fuente:

`christian/kmp_prefix_suffix/prefix_suffix_count.cpp`

---

> Este problema es excelente para profundizar en el análisis estructural de cadenas y el uso del algoritmo KMP para conteo eficiente de patrones.