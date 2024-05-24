#include <iostream>
#include "variables.h"
using namespace std;

int main(int argc, char const *argv[])
{

    int op;

    PERSONA profesor;  //asi como puse profesor pude haber puesto cualquier otra cosa+
    cout<<"Escriba su nombre: "<<endl;
    scanf(" %[^\n]", profesor.name);
    cout<<"Escriba el apellido: "<<endl;
    scanf(" %[^\n]", profesor.apellidos);
    cout<<"Cif : ";
    cin>> profesor.cif;


//estudiantes
    PERSONA estudiantes[100];
/*Se utiliza un while para ingresar los datos de mas de un estudiante si se quiere
sino, solo se agregaran los de 1, por esa razon se usa un vector
si hubieramos querido ingresar los datos de un solo estudiante no utilizamos ni vector, ni while(Hacemos lo mismo que hcicimos con el 
profesor ya q este solo se ingresan los datos de un solo profesor)*/
    int i = 0;
    do
    {
        system("cls||clear");
        printf("CIF: ");
        scanf("  %[^\n]", estudiantes[i].cif);
        printf("Nombres: ");
        scanf("  %[^\n]", estudiantes[i].name);
        printf(" Apellidos: ");
        scanf("  %[^\n]", estudiantes[i].apellidos);
        printf("Nota: ");
        scanf(" %d", &estudiantes[i].notas);

        cout<<"Desea ingresar otro registro? 1. si, 2. No "<<endl;
        cin>>op;
        i++;
    } while ( op!= 0);
    
    cout<<"El nombre del profesor es: "<<profesor.name<<endl;
    cout<<"El apellido del profesor es: "<<profesor.apellidos<<endl;
    cout<<"El cif del profesor es: "<<profesor.cif<<endl;
    cout<<"El nombre completo  del profesor es: "<<profesor.name<<profesor.apellidos<<endl;
    cout<<"Listado de los estudiantes: "<<endl;

//imprimir datos de los estudiantes
    for(int j = 0; j< i; j++){
        //cout<<" Nombre: "<<estudiantes[j].name<<"Apellidos: "<<estudiantes[j].apellidos<<"Notas: "<<estudiantes[j].notas<<endl;

        printf(" Nombre: %s \nApellidos: %s \nNota: %d", estudiantes[j].name,estudiantes[j].apellidos,estudiantes[j].notas);
    }
    
    return 0;
}


/*cout<<"Ingresar nombre del estudiante: "<<endl;
    scanf(" %[^\n]", estudiante.name);
    cout<< "Ingresar el apellido del estudiante: "<<endl;
    scanf(" %[^\n]", estudiante.apellidos);
    cout<<"Ingresar el cif de cada estudiante: "<<endl;
    cin>>estudiante.cif;
    cout<<"Ingresar la nota del estudiante: "<<endl;
    cin>>estudiante.notas;*/
