#include <iostream>
#include "Grafos/Grafo.h"
using namespace std;
/*Ejercicio N°2
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
grafo).*/

void menu()
{
    cout << "***Menu de Comisión***" << endl;
    cout << "1.Agregar Miembro" << endl;
    cout << "2.Agregar Amistad" << endl;
    cout << "3.Eliminar Amistad" << endl;
    cout << "4.Buscar Usuario" << endl;
    cout << "5.Imprimir Comisión" << endl;
    cout << "6.Salir" << endl;
}

void agregarMiembro(Grafo<string> &grafo1){
    do{
        string nombre;
        cout << "Ingrese el nombre del miembro, para salir ingrese 1: ";
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

void agregarColaboracion(Grafo<string> &grafo1){
    string nombre1, nombre2;
    cout << "Ingrese el nombre de la primera persona: ";
    cin >> nombre1;
    cout << "Ingrese el nombre de la segunda persona: ";
    cin >> nombre2;
    try{
        grafo1.agregarArista(nombre1, nombre2);
        cout<< "Colaboración agregada" << endl;
    }
    catch(int e){
        cout <<"uno de los usuarios no es parte de la comisión"<< endl;
    }
    
}

void eliminarColaboracion(Grafo<string> &grafo1){
    string nombre1, nombre2;
    cout << "Ingrese el nombre de la primera persona: ";
    cin >> nombre1;
    cout << "Ingrese el nombre de la segunda persona: ";
    cin >> nombre2;
   try{
        grafo1.eliminarArista(nombre1, nombre2);
        cout<< "Colaboración eliminada" << endl;
    }
    catch(int e){
        cout <<"uno de los usuarios no es parte de la comisión"<< endl;
    }
}

void buscarMiembro(Grafo<string> &grafo1){
    string nombre;
    cout << "Ingrese el nombre de la persona a buscar: ";
    cin >> nombre;
    if(grafo1.buscarNodo(nombre))
    {
        cout << "El miembro está en la comisión" << endl;
    }
    else
    {
        cout << "El miembro no está en la comisión" << endl;
    }
}

void imprimirComision(Grafo<string> &grafo1){
    grafo1.imprimir();
}


int main(){
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
            agregarMiembro(grafo1);
            break;
        case 2:
            agregarColaboracion(grafo1);
            break;
        case 3:
            eliminarColaboracion(grafo1);
            break;
        case 4:
            buscarMiembro(grafo1);
            break;
        case 5:
            imprimirComision(grafo1);
            break;
        case 6:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    } while (opcion != 6);
    return 0;
}
