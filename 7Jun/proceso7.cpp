#include <iostream>
#include "variables7.h"
#include <string.h>


using namespace std;

int pos = 0;
CIUDAD ciudades[MAX_REGIS]; //100

//crud
void agregar(CIUDAD *c); //ciudad llamada c  ,es la variable que va dentro del void
void editar(CIUDAD *c);
void eliminar(int id);
CIUDAD buscar(int id);
int menu();
void principal();
int obtPos(int id);
void pedirDatos();


//proceso
void agregar(CIUDAD *c){

    ciudades[pos] = *c;
    pos++;

}
//buscar
CIUDAD buscar(int id){
//metodo de burbuja (buscar en todo un arreglo datos)

for(int i = 0; i < pos; i++){
    if(id == ciudades[i].ID){
        return ciudades[i];
    }
   
}
    CIUDAD c;
    return c;

}
//otra funcion para no tener que escribir de nuevo
int obtPos(int id){
    int posicion;
    for(int i = 0; i<pos; i++){
        if(ciudades[i].ID == id){
            posicion = i;
            return i;
        }
    }   
    return-1;
}


//editar
void editar(CIUDAD *c, int id){
    int posi = obtPos(id)
    CIUDAD ciudad = buscar(id);
    strcpy(ciudad.[posi], c->nombre);
    strcpy(ciudad.[posi], c->descripcion);
    int posi = obtPos(id);
    
    for(int i = 0; i<pos; i++){
        if(ciudades[i].ID == id){
            posicion = i;
            break;
        }
    }

    
}



//eliminar
void eliminar(int id){
    int posi = obtPos(id);
        for( int i = posicion; i<pos; i++){
            ciudades[i] = ciudades[i+1];
        }
        pos--;
}


// menu
int menu(){

    int op;
    cout << "Menu"<<endl;
    cout << "1. Agregar" << endl;
    cout << "2. Editar"<< endl;
    cout << "3. Eliminar" << endl;
    cout << "4. Buscar" << endl;
    cout << "5. Mostrar todo" << endl;
    cout << "6. Salir" << endl;

    cout << "Digite la opcion: " << endl;
    cin >> op;
    return op;
}

void principal(){
    int op;

    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            pedirDatos();
            break;
        
        
        case 6:
        cout<< "Adios"<<endl;
        break;

         default:
         cout << "Error"<<endl;
            break;
        }
    } while ( op != 6);
    
}

void pedirDatos();
{
    CIUDAD ciudad;
    cout << "DATOS" << endl;
    cout << "Datos de ciudad" << endl;
    cin >> ciudad.id;
    cout << "Nombre" << endl;
    cin >> ciudad.nombre;
    cout << "Descripcion" << endl;
    cin >> ciudad.descripcion;
    agregar(&ciudad);
    cout << "Registro agregado";


}