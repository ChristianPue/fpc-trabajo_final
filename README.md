# Proyecto Final – Fundamentos de Programación Competitiva

## 👥 Integrantes
- Araujo Canales, Christian Jeaker [Encargado de 8 problemas]
- [Nombre del compañero] [Encargado de 7 problemas]

## 📚 Descripción General

Este repositorio contiene nuestras soluciones a los 15 problemas asignados para el curso **Fundamentos de Programación Competitiva**. El objetivo de este proyecto es aplicar algoritmos avanzados y estructuras de datos eficientes para resolver problemas del mundo competitivo. Cada integrante abordó una parte de los problemas, permitiendo una división equilibrada del trabajo.

## 🧠 Estructuras y Algoritmos Abordados

A continuación se listan los problemas ya desarrollados por **Christian**. Los problemas de [Nombre del compañero] serán incorporados por él próximamente.
| Tema                  | Problema                                                                               | Algoritmo / Estructura             | Responsable | Archivo fuente                                         |
| --------------------- | -------------------------------------------------------------------------------------- | ---------------------------------- | ----------- | ------------------------------------------------------ |
| Map                   | [C. Registration System](https://codeforces.com/problemset/problem/4/C)                | Hash Map / Diccionario             | Christian   | [`christian/map_registration/registration_system.cpp`](https://github.com/ChristianPue/fpc-trabajo_final/tree/main/christian/map_registration/registration_system.cpp)   |
| Algoritmo KMP | [Prefix Suffix Search](https://codeforces.com/problemset/problem/432/D)                          | Algoritmo KMP | Christian   | [`christian/prefix_suffix_search/prefix_suffix_search.cpp`](https://github.com/ChristianPue/fpc-trabajo_final/tree/main/christian/prefix_suffix_search/prefix_suffix_search.cpp) |
| Algoritmo Z | [Cyclic Permutations](https://www.hackerearth.com/practice/algorithms/string-algorithm/z-algorithm/practice-problems/algorithm/cyclic-permutations-15/)                          | Algoritmo Z | Christian   | [`christian/cyclic_permutations/cyclic_permutations.cpp`](https://github.com/ChristianPue/fpc-trabajo_final/tree/main/christian/cyclic_permutations/cyclic_permutations.cpp) |
| Segment Tree          | [D. Xenia and Bit Operations](https://codeforces.com/problemset/problem/339/D)         | Árbol de segmentos                 | Christian   | [`christian/segment_tree_xenia/xenia_bit_ops.cpp`](https://github.com/ChristianPue/fpc-trabajo_final/tree/main/christian/segment_tree_xenia/xenia_bit_ops.cpp) |
| Fenwick Tree          | [E. String Reversal](https://codeforces.com/contest/1430/problem/E)                    | Fenwick Tree                    | Christian   | [`christian/fenwick_tree_string_reversal/string_reversal.cpp`](https://github.com/ChristianPue/fpc-trabajo_final/tree/main/christian/fenwick_tree_string_reversal/string_reversal.cpp) | 
| Árboles ternarios     | [Autocomplete System](https://leetcode.ca/all/642.html)                     | Árbol ternario                     | Christian   | [`christian/autocomplete_system/autocomplete_system.cpp`](https://github.com/ChristianPue/fpc-trabajo_final/tree/main/christian/autocomplete_system/autocomplete_system.cpp) |
| Trie                  | [No Prefix Set](https://www.hackerrank.com/challenges/no-prefix-set/problem)           | Trie                               | Christian   | [`christian/trie_no_prefix_set/no_prefix_set.cpp`](https://github.com/ChristianPue/fpc-trabajo_final/tree/main/christian/trie_no_prefix_set/no_prefix_set.cpp) |
| Programación Dinámica | [F. Yet Another Minimization Problem](https://codeforces.com/problemset/problem/868/F) | DP con divide and conquer          | Christian   | [`christian/dp_minimization/minimization.cpp`](https://github.com/ChristianPue/fpc-trabajo_final/tree/main/christian/dp_minimization/minimization.cpp)  |

➡️ _Los 7 problemas restantes serán agregados por [Nombre del compañero]._ 

## 📁 Estructura del Repositorio

```plaintext
/
├── christian/
│   ├── autocomplete_system/
│   │   └── autocomplete_system.cpp
│   ├── cyclic_permutations/
│   │   └── cyclic_permutations.cpp
│   ├── dp_minimization/
│   │   └── minimization.cpp
│   ├── fenwick_tree_string_reversal/
│   │   └── string_reversal.cpp
│   ├── map_registration/
│   │   └── registration_system.cpp
│   ├── prefix_suffix_search/
│   │   └── prefix_suffix_search.cpp
│   ├── segment_tree_xenia/
│   │   └── xenia_bit_ops.cpp
│   └── trie_no_prefix_set/
│       └── no_prefix_set.cpp
├── companero/
│   └── [Subcarpetas por problema] (por completar)
└── README.md
```

### 📄 statement.md

En cada subcarpeta, se incluye un archivo `statement.md` con la siguiente información:

- **🔹 Descripción del problema:** Se detalla el enunciado, contexto o situación que se busca resolver.
- **🔹 Comportamiento esperado:** Qué resultados se esperan al ejecutar la solución (entradas, salidas, condiciones).
- **🔹 Enfoque de solución:** Se explica el algoritmo, método o estructura de datos utilizada para resolver el problema (por ejemplo, uso de Trie, programación dinámica, etc.).

Este archivo permite comprender rápidamente la naturaleza del problema y su solución sin necesidad de leer directamente el código fuente.