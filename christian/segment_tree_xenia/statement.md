# 📝 Statement – D. Xenia and Bit Operations

## 🧩 Descripción del Problema

Xenia, una programadora principiante, tiene una secuencia de `2ⁿ` enteros no negativos. Para entender mejor las operaciones bit a bit, define un proceso iterativo sobre la secuencia:

1. En la primera iteración, toma el **OR bit a bit** de cada par adyacente.
2. En la segunda iteración, toma el **XOR bit a bit** de cada par adyacente del resultado anterior.
3. En la tercera, vuelve a aplicar **OR**, y así sucesivamente, alternando entre OR y XOR.

Este proceso continúa hasta que queda un solo número, llamado `v`.

Ahora, se te dan `m` consultas. Cada consulta actualiza un valor de la secuencia original. Después de cada actualización, debes imprimir el nuevo valor `v`.

---

## 📥 Entrada

- La primera línea contiene dos enteros `n` y `m`  
  `(1 ≤ n ≤ 17, 1 ≤ m ≤ 10⁵)`  
  donde `2ⁿ` es el tamaño de la secuencia original.

- La segunda línea contiene `2ⁿ` enteros `a₁, a₂, ..., a_{2ⁿ}`  
  `(0 ≤ aᵢ < 2³⁰)` — los valores iniciales.

- Las siguientes `m` líneas contienen dos enteros `pᵢ` y `bᵢ`  
  `(1 ≤ pᵢ ≤ 2ⁿ, 0 ≤ bᵢ < 2³⁰)` — actualiza `a[pᵢ] = bᵢ`.

---

## 📤 Salida

Después de cada consulta, imprime el nuevo valor `v` resultante del proceso de reducción bit a bit.

---

## 🧠 Ejemplo

### Entrada:
2 4  
1 6 3 5  
1 4  
3 4  
1 2  
1 2  

### Salida:
1  
3  
3  
3  


---

## 💡 Pistas de implementación

- El proceso de reducción puede modelarse como un **árbol de segmentos** completo de altura `n`.
- Cada nodo del árbol alterna entre operaciones OR y XOR según su nivel.
- Las actualizaciones deben propagarse eficientemente, por lo que una implementación con **Segment Tree** es ideal.

---

## 🧵 Ruta del archivo fuente:

`christian/segment_tree_xenia/xenia_bit_ops.cpp`

---

> Este problema es excelente para practicar árboles de segmentos con operaciones personalizadas y alternancia de lógica por nivel.