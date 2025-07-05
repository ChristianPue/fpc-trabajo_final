# No Prefix Set

## 🧩 Descripción del problema

Dado un conjunto de cadenas compuesto solo por letras minúsculas del alfabeto inglés, tu tarea es verificar si dicho conjunto es un *"conjunto sin prefijos"*. Es decir, ninguna cadena del conjunto debe ser prefijo de otra.

Debes leer cadenas una por una e identificar si al momento de insertar una cadena:

- 🔴 Ya existe una cadena que es prefijo de la nueva cadena.
- 🔴 La nueva cadena es prefijo de alguna cadena previamente insertada.

En ambos casos, deberás reportar inmediatamente el problema indicando que el conjunto no es válido y cuál fue la cadena que lo hizo inválido.

## ✅ Entrada

- La primera línea contiene un entero **n** (1 ≤ n ≤ 10⁵): el número de cadenas.
- Cada una de las siguientes **n** líneas contiene una cadena **sᵢ** (1 ≤ |sᵢ| ≤ 60) compuesta únicamente por letras minúsculas.

## 🧾 Salida

- Si todas las cadenas pueden insertarse sin violar la condición, imprime:  

GOOD SET  


- Si alguna cadena causa una violación, imprime:

BAD SET <cadena_conflictiva>  


## 🧠 Enfoque recomendado

Este problema se puede resolver eficientemente utilizando una estructura de datos **Trie (árbol de prefijos)**.

- Al insertar una palabra en la Trie, se verifica si:
- Existe un nodo `isEnd = true` durante la inserción → una palabra existente es prefijo de la nueva.
- Al terminar de insertar la palabra, existen nodos hijos → la nueva palabra es prefijo de alguna existente.

En ambos casos, se detecta que no se cumple la condición de conjunto sin prefijos.

## 🧪 Ejemplo

### Entrada
4  
aab  
defgab  
abcde  
aabcde  

### Salida
BAD SET  
aabcde  


### Explicación

La cadena `"aab"` ya ha sido insertada. Luego `"aabcde"` comienza con `"aab"`, por lo tanto `"aab"` es prefijo de `"aabcde"`. El conjunto deja de ser válido en ese punto.

---

¿Quieres que también te prepare el código base con Trie en Java o prefieres implementarlo tú mismo? También puedo ayudarte a comentarlo o testearlo.