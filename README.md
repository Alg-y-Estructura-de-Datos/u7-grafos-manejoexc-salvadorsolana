Unidad 5.3 - Grafos
Ejercicio N°1
En una red social, los usuarios son representados como nodos, y las relaciones de amistad o
conexión entre ellos son aristas. Este grafo es no dirigido, ya que, si dos usuarios son amigos,
la relación es bidireccional. También puedes almacenar atributos adicionales, como el
número de interacciones entre ellos, que podrían ser ponderaciones en las aristas.
Descripción del problema:
● Cada usuario de la red social es un nodo en el grafo.
● Las amistades entre usuarios son las aristas.
● Puedes buscar si dos usuarios son amigos.
● Puedes agregar nuevas amistades.
● Eliminar amistades o usuarios de la red.
Operaciones:
1. Insertar Usuario: Añadir un nodo al grafo representando a un nuevo usuario.
2. Agregar Amistad: Añadir una arista entre dos nodos (usuarios) para representar una
amistad.
3. Eliminar Amistad: Quitar la conexión entre dos usuarios.
4. Buscar Usuario: Ver si un usuario está en la red social.
5. Imprimir la Red Social: Mostrar todos los usuarios y sus amigos (las conexiones en el
grafo).
Ejercicio N°2
En una comisión de un colegio o universidad, los profesores o estudiantes son nodos, y las
colaboraciones o relaciones entre ellos, como trabajar en un proyecto, son aristas. Este grafo
puede ser dirigido si una colaboración tiene una jerarquía (por ejemplo, un profesor dirige a
varios estudiantes).
Descripción del problema:
● Cada persona en la comisión es un nodo en el grafo.
● Las colaboraciones o trabajos en conjunto son las aristas.
● Puedes buscar si dos personas están colaborando en algún proyecto.
● Agregar o eliminar miembros y colaboraciones.
● Mostrar todas las relaciones de colaboración dentro de la comisión.
Operaciones:
● Agregar Miembro: Añadir un nodo al grafo representando a un nuevo miembro de la
comisión.
● Agregar Colaboración: Crear una arista dirigida entre dos nodos (miembros) para
representar una relación de trabajo o supervisión.
● Eliminar Colaboración: Eliminar la relación de trabajo entre dos miembros.
● Buscar Miembro: Buscar un miembro en el grafo de la comisión.
● Imprimir Comisión: Mostrar todos los miembros y sus relaciones de trabajo.
Operaciones:
1. Insertar Usuario: Añadir un nodo al grafo representando a un nuevo usuario.
2. Agregar Amistad: Añadir una arista entre dos nodos (usuarios) para representar una
amistad.
3. Eliminar Amistad: Quitar la conexión entre dos usuarios.
4. Buscar Usuario: Ver si un usuario está en la red social.
5. Imprimir la Red Social: Mostrar todos los usuarios y sus amigos (las conexiones en el
grafo).
Ejercicio N°3
En una ciudad, se está implementando un sistema de gestión de rutas de transporte entre
distintas estaciones. Cada estación se representa como un nodo, y las rutas directas entre
estaciones se representan como aristas. Tu tarea es diseñar este sistema de rutas utilizando
grafos, donde los ciudadanos puedan interactuar con el sistema para realizar varias
operaciones.
1. Agregar estaciones: El sistema debe permitir agregar nuevas estaciones al mapa. Cada
estación tiene un nombre único.
2. Conexión de rutas entre estaciones: Las estaciones pueden estar conectadas
mediante rutas directas. El sistema debe permitir agregar una conexión entre dos
estaciones, indicando que existe una ruta entre ellas.
3. Eliminar estaciones: Si una estación deja de funcionar, debe ser posible eliminarla del
sistema. Al eliminar una estación, también deben eliminarse todas las rutas que
conectan a dicha estación.
4. Eliminar rutas: En caso de que una ruta deje de ser operativa entre dos estaciones, el
sistema debe poder eliminar esa conexión sin afectar al resto de las estaciones.
5. Consulta de conectividad: Los ciudadanos podrán consultar si existe una ruta directa
entre dos estaciones específicas. El sistema debe devolver si esas estaciones están
conectadas por una ruta.
6. Verificar si una estación existe: El sistema debe proporcionar una función para
verificar si una estación específica existe en el mapa.
7. Imprimir el mapa completo: Finalmente, el sistema debe poder imprimir un listado de
todas las estaciones y sus conexiones directas, mostrando el estado actual de todas
las rutas en la ciudad.