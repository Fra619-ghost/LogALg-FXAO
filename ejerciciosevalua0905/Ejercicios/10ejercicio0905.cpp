#include<iostream>


using namespace std;

int matriz[100][100];
int filas;
int columnas;





void proceso();



int main(int argc, char const *argv[])
{

    proceso();
    return 0;
}


void proceso(){

    cout<<"Ingresar numero de filas: "<<endl;
    cin>>filas;
    cout<<"Ingresar numero de columnas: "<<endl;
    cin>>columnas;

int i = 0;

while( i<filas){
    int j = 0;
    //int i = 0;
    while(j<columnas){
        //int j = 0;
        cout<<"Digite un numero: ["<<i<<"]["<<j<<"]";
        cin>>matriz[i][j];
        j++;
    }
    i++;
}


//imorimr matriz original
int i2 = 0;     //se inicializa una variable nueva con nomre disitinto ya q estamos en el mismo void

while( i2<filas){
    int j2 = 0;

    while(j2<columnas){
        //int j2 = 0;
        
        cout<<matriz[i2][j2];
        j2++;
    }
    i2++;
    cout<<"\n";
}
//matriz transpuesta
int i3 = 0;

while(i3<filas){
    //int j3 = 0;
    int j3 = 0;
    while(j3<columnas){
        cout<<matriz[j3][i3];
        j3++;
    }
    i3++;
    cout<<"\n";
}







}