# 📝 Statement – F. Yet Another Minimization Problem

## 🧩 Descripción del Problema

Se te da un arreglo de `n` enteros `a₁, a₂, ..., aₙ`. Tu tarea es dividir este arreglo en exactamente `k` subsegmentos **contiguos, no vacíos y no superpuestos**, de modo que la **suma total de los costos** de cada subsegmento sea **mínima**.

### ¿Qué es el costo de un subsegmento?

El **costo** de un subsegmento es el número de **pares no ordenados de índices distintos** dentro del subsegmento que contienen **valores iguales**. Es decir, si un valor aparece varias veces en un subsegmento, cada par de ocurrencias iguales contribuye al costo.

---

## 📥 Entrada

- La primera línea contiene dos enteros `n` y `k`  
  `(2 ≤ n ≤ 10⁵, 2 ≤ k ≤ min(n, 20))` — longitud del arreglo y número de subsegmentos.

- La segunda línea contiene `n` enteros `a₁, a₂, ..., aₙ`  
  `(1 ≤ aᵢ ≤ n)` — los elementos del arreglo.

---

## 📤 Salida

- Imprime un solo número: el **mínimo costo total** posible al dividir el arreglo en `k` subsegmentos.

---

## 🧠 Ejemplo

### Entrada:
7 3  
1 1 3 3 3 2 1  

### Salida:
1


### Explicación:
Una división óptima sería:
- [1]
- [1, 3]
- [3, 3, 2, 1]

Los costos individuales son 0, 0 y 1 respectivamente. Total: 1.

---

## 💡 Pistas de implementación

- Este problema se resuelve con **Programación Dinámica (DP)**.
- La función de costo `cost(l, r)` puede calcularse eficientemente usando una técnica tipo **Mo’s Algorithm** o **Divide and Conquer Optimization**.
- La clave está en mantener el conteo de ocurrencias mientras se mueven los extremos del subsegmento.

---

## 🧵 Ruta del archivo fuente:

`christian/z_algorithm_minimization/minimization.cpp`

---

> Este problema es un excelente ejercicio de optimización dinámica con estructuras de conteo y técnicas avanzadas como Divide & Conquer DP.