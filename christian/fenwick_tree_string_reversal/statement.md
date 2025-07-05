# 📝 Statement – E. String Reversal

## 🧩 Descripción del Problema

Dado un string `s` de longitud `n`, tu objetivo es **revertirlo** (es decir, convertirlo en `rev(s)`) utilizando únicamente **intercambios entre caracteres adyacentes**.

Cada operación consiste en intercambiar dos letras consecutivas. Tu tarea es calcular el **número mínimo de intercambios necesarios** para transformar `s` en su reverso exacto.

---

## 📥 Entrada

- La primera línea contiene un entero `n` — la longitud del string `s`.  
  `(2 ≤ n ≤ 2 × 10⁵)`

- La segunda línea contiene el string `s`, compuesto solo por letras minúsculas (`a`–`z`).

---

## 📤 Salida

- Imprime un solo número: el **mínimo número de intercambios de caracteres adyacentes** necesarios para invertir el string.

---

## 🧠 Ejemplo
### Entrada:
5  
aaaza  

#### Salida
2  


### Explicación:
El string original es `"aaaza"` y su reverso es `"azaaa"`.  
Una secuencia óptima de intercambios sería:
1. Intercambiar `z` con la `a` a su derecha → `"aazaa"`
2. Intercambiar `z` con la siguiente `a` → `"azaaa"`

---

## 💡 Enfoque con Fenwick Tree

Para resolver este problema eficientemente:

- Observa que el problema equivale a **contar el número de inversiones** necesarias para transformar `s` en `rev(s)` bajo restricciones de swaps adyacentes.
- Se puede modelar como un problema de **conteo de inversiones** entre las posiciones de los caracteres en `s` y su reverso.
- Para cada carácter en `rev(s)`, buscamos su posición correspondiente en `s` y contamos cuántos caracteres ya han sido "movidos" antes de él.
- Un **Fenwick Tree (BIT)** permite mantener y consultar eficientemente cuántos caracteres han sido procesados en posiciones anteriores.

Este enfoque reduce la complejidad a **O(n log n)**, ideal para los límites del problema.

---

## 🧵 Ruta del archivo fuente:

`christian/fenwick_tree_flowers/string_reversal.cpp`

---

> Este problema es una excelente aplicación del Fenwick Tree para conteo de inversiones y manipulación eficiente de secuencias.