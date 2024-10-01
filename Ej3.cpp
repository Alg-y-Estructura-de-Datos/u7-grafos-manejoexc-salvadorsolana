#include <iostream>
#include "Grafos/Grafo.h"
using namespace std;
/*Ejercicio N°3
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
las rutas en la ciudad*/

void menu()
{
    cout << "***Menu de Rutas***" << endl;
    cout << "1.Agregar Estacion" << endl;
    cout << "2.Agregar Ruta" << endl;
    cout << "3.Eliminar Estación" << endl;
    cout << "4.Eliminar Ruta" << endl;
    cout << "5.Consulta de Conectividad" << endl;
    cout << "6.Verificar si una estación existe" << endl;
    cout << "7.Imprimir Mapa" << endl;
    cout << "8.Salir" << endl;
}

void agregarEstacion(Grafo<string> &grafo1){
    do{
        string nombre;
        cout << "Ingrese el nombre de la estacion, para salir ingrese 1: ";
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

void agregarRuta(Grafo<string> &grafo1){
    string nombre1, nombre2;
    cout << "Ingrese el nombre de la primera estación: ";
    cin >> nombre1;
    cout << "Ingrese el nombre de la segunda estación: ";
    cin >> nombre2;
    try{
        grafo1.agregarArista(nombre1, nombre2);
        cout<< "Ruta agregada" << endl;
    }
    catch(int e){
        cout <<"una de las estaciones no existe"<< endl;
    }

}

void eliminarEstacion(Grafo<string> &grafo1){
    string nombre;
    cout << "Ingrese el nombre de la estación a eliminar: ";
    cin >> nombre;
    try{
        grafo1.eliminarNodo(nombre);
        cout << "Estación eliminada" << endl;
    }
    catch(int e){
        cout <<"la estación no existe"<< endl;
    }
  
}

void eliminarRuta(Grafo<string> &grafo1){
    string nombre1, nombre2;
    cout << "Ingrese el nombre de la primera estación: ";
    cin >> nombre1;
    cout << "Ingrese el nombre de la segunda estación: ";
    cin >> nombre2;
    try{
        grafo1.eliminarArista(nombre1, nombre2);
        cout<< "Ruta eliminada" << endl;
    }
    catch(int e){
        cout <<"una de las estaciones no existe"<< endl;
    }
}

void consultaConectividad(Grafo<string> &grafo1){
    string nombre1, nombre2;
    cout << "Ingrese el nombre de la primera estación: ";
    cin >> nombre1;
    cout << "Ingrese el nombre de la segunda estación: ";
    cin >> nombre2;
    if(grafo1.estanConectados(nombre1, nombre2))
    {
        cout << "Las estaciones están conectadas" << endl;
    }
    else
    {
        cout << "Las estaciones no están conectadas" << endl;
    }
}

void verificarEstacion(Grafo<string> &grafo1){
    string nombre;
    cout << "Ingrese el nombre de la estación a verificar: ";
    cin >> nombre;
    if(grafo1.buscarNodo(nombre))
    {
        cout << "La estación está en el mapa" << endl;
    }
    else
    {
        cout << "La estación no está en el mapa" << endl;
    }
}

void imprimirMapa(Grafo<string> &grafo1){
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
                agregarEstacion(grafo1);
                break;
            case 2:
                agregarRuta(grafo1);
                break;
            case 3:
                eliminarEstacion(grafo1);
                break;
            case 4:
                eliminarRuta(grafo1);
                break;
            case 5:
                consultaConectividad(grafo1);
                break;
            case 6:
                verificarEstacion(grafo1);
                break;
            case 7:
                imprimirMapa(grafo1);
                break;
            case 8:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    } while(opcion != 8);
    return 0;
}
