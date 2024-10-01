#include <iostream>
#include "Grafos/Grafo.h"
using namespace std;
 /*  Ejercicio N°1
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
*/

void menu()
{
    cout << "***Menu de Red***" << endl;
    cout << "1.Agregar Persona" << endl;
    cout << "2.Agregar Amistad" << endl;
    cout << "3.Eliminar amistad" << endl;
    cout << "4.Buscar Amistad" << endl;
    cout << "5 Eliminar Usuario" << endl;
    cout << "6.Imprimir red" << endl;
    cout << "7.Salir" << endl;
}


void agregarPersona(Grafo<string> &grafo1){
    do{
        string nombre;
        cout << "Ingrese el nombre de la persona, para salir ingrese 1: ";
        cin >> nombre;
        if(nombre != "1")
        {
            grafo1.agregarNodo(nombre);
        }
        else
        {
            break;
        }
    
    } while(true);

}

void agregarAmistad(Grafo<string> &grafo1){
    string nombre1, nombre2;
    cout << "Ingrese el nombre de la primera persona: ";
    cin >> nombre1;
    cout << "Ingrese el nombre de la segunda persona: ";
    cin >> nombre2;
    try{
        grafo1.agregarArista(nombre1, nombre2);
        cout<< "Amistad agregada" << endl;
    }
    catch(int e){
        cout <<"uno de los usuarios no es parte de la red social"<< endl;
    }
   
}

void eliminarAmistad(Grafo<string> &grafo1){
    string nombre1, nombre2;
    cout << "Ingrese el nombre de la primera persona: ";
    cin >> nombre1;
    cout << "Ingrese el nombre de la segunda persona: ";
    cin >> nombre2;
    try{
        grafo1.eliminarArista(nombre1, nombre2);
        cout<< "Amistad eliminada" << endl;
    }
    catch(int e){
        cout <<"uno de los usuarios no es parte de la red social"<< endl;
    }
}

void buscarAmistad(Grafo<string> &grafo1){
    string nombre1, nombre2;
    cout << "Ingrese el nombre de la primera persona: ";
    cin >> nombre1;
    cout << "Ingrese el nombre de la segunda persona: ";
    cin >> nombre2;
    if(grafo1.estanConectados(nombre1, nombre2))
    {
        cout << "Son amigos" << endl;
    }
    else
    {
        cout << "No son amigos" << endl;
    }
}

void eliminarUsuario(Grafo<string> &grafo1){
    string nombre;
    cout << "Ingrese el nombre de la persona a eliminar: ";
    cin >> nombre;
    grafo1.eliminarNodo(nombre);
    cout << "Usuario eliminado" << endl;
}

void imprimirRed(Grafo<string> &grafo1){
    grafo1.imprimir();
}

int main()
{
    Grafo<string> grafo1;
    int opcion;
    do
    {
        menu();
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            agregarPersona(grafo1);
            break;
        case 2:
            agregarAmistad(grafo1);
            break;
        case 3:
            eliminarAmistad(grafo1);
            break;
        case 4:
            buscarAmistad(grafo1);
            break;
        case 5:
            eliminarUsuario(grafo1);
            break;
        case 6:
            imprimirRed(grafo1);
            break;
        case 7:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    } while (opcion != 7);
    return 0;
}

