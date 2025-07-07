# 📝 Statement – C. Registration System

## 🧩 Descripción del Problema

Un nuevo sistema de registro ha sido implementado en una red social. Cada nuevo usuario intenta registrarse con un nombre de usuario elegido libremente.

- Si el nombre de usuario **no ha sido usado antes**, se acepta tal cual y el sistema responde con `"OK"`.
- Si **ya existe**, el sistema debe sugerir una nueva variante: añadir al final del nombre original el menor número posible `k`, tal que el nuevo nombre aún **no haya sido registrado**. Ejemplo: si `alex`, `alex1`, y `alex2` ya existen, se le sugiere `alex3`.

## 📥 Entrada

- La primera línea contiene un entero `n` – el número de solicitudes de registro `(1 ≤ n ≤ 10⁵)`.
- Las siguientes `n` líneas contienen un nombre de usuario propuesto, cada uno compuesto solo por letras minúsculas y de longitud máxima 32.

## 📤 Salida

Para cada solicitud, el sistema debe imprimir:

- `"OK"` si el nombre es nuevo.
- El nuevo nombre sugerido (nombre original + número) si el nombre ya fue usado.

## 🧠 Ejemplo

### Entrada:
4  
bob  
alice  
bob  
bob

### Salida:
OK  
OK  
bob1  
bob2

## 🛠️ Recomendaciones

El uso de **map** es ideal para llevar un registro eficiente de los nombres y sus conteos, asegurando una solución con tiempo de búsqueda y actualización eficiente. Sin embargo, se recomienda considerar el uso de **unordered_map** para mejorar aún más la eficiencia, ya que ofrece un tiempo constante promedio para las operaciones de inserción, eliminación y búsqueda.

## 🧵 Ruta del archivo fuente:

`christian/map_registration/registration_system.cpp`

---

> Este problema pone a prueba el manejo eficiente de estructuras de datos para detección y conteo de colisiones en cadenas. Es ideal para introducir el uso de mapas en C++.