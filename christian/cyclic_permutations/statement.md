# 📝 Statement – Cyclic Permutations

## 🧩 Descripción del Problema

Dado un string binario `A` y otro string binario `B`, ambos de la misma longitud `n`, se desea contar cuántas **rotaciones cíclicas** de `B` producen un string que, al aplicarle una operación XOR bit a bit con `A`, da como resultado un string compuesto solo por ceros.

En otras palabras, se busca cuántas rotaciones de `B` son **idénticas** a `A`.

---

## 📥 Entrada

- La primera línea contiene un entero `T` — el número de casos de prueba.  
  `(1 ≤ T ≤ 10)`

- Cada caso de prueba consiste en dos líneas:
  - La primera línea contiene el string binario `A`.
  - La segunda línea contiene el string binario `B`.

  Ambos strings tienen la misma longitud `n`, donde `1 ≤ n ≤ 10⁵`.

---

## 📤 Salida

Para cada caso de prueba, imprime una línea con un entero: el número de rotaciones cíclicas de `B` que coinciden exactamente con `A`.

---

## 🧠 Ejemplo

### Entrada:
2  
101  
101  
111  
111  

### Salida:
1  
3


### Explicación:
- En el primer caso, las rotaciones de `B = "101"` son: `"101"`, `"011"`, `"110"`. Solo una coincide con `A`.
- En el segundo caso, todas las rotaciones de `"111"` son iguales a `"111"`, así que hay 3 coincidencias.

---

## 💡 Enfoque con el Algoritmo Z

Para resolver este problema eficientemente:

1. Concatenamos `A + "$" + B + B` (duplicamos `B` para cubrir todas sus rotaciones).
2. Aplicamos el **algoritmo Z** sobre este string.
3. Contamos cuántas veces aparece `A` como prefijo en las posiciones válidas del segundo `B`.

Este enfoque tiene complejidad **O(n)** por caso de prueba y evita generar todas las rotaciones manualmente.

---

## 🧵 Ruta del archivo fuente:

`christian/z_algorithm_cyclic/cyclic_permutations.cpp`

---

> Este problema es ideal para practicar el algoritmo Z en detección eficiente de patrones y rotaciones dentro de cadenas.