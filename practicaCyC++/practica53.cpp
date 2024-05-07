#include<iostream>

using namespace std;
                                                        

#define MAX 10

int nums[MAX];
int posicio=0; 
int facto=0;

void agregarNum(int num){
    if(posicio<MAX){
        nums[posicio] = num;
        posicio++; 

    }else{
        cout<<"No se puede agregar el numero\n";
    }
}




int factoriales(int facto ,int ultElemen){
    if(ultElemen == -1){
        return facto;
    }
    facto = facto * nums[ultElemen];
    factoriales(facto , ultElemen -1);
    

}

/*int factoriales(int numero){

    int facto;
    if(numero == 0){
        facto=1;
       
    }else{
        facto=numero*factoriales(numero-1);



    }
   
    return facto;

}*/

void menu(){
    int op;
    int num;
    int result;
    cout << "1. Agregar elemento\n";
    cout << "2. factoriales\n";
    cout << "3. mostrar \n";
    cout << "4. salir\n";
    cin>> op;

    switch (op)
    {
    case 1: 
        cout<< "Dime un numero";
        cin>> num;
        agregarNum(num);
        break;
    
    case 2:
    
    cout << "Los factoriales son:" << factoriales(facto , posicio -1)<< endl;
     

        /*result=num*factoriales(num-1);
        cout << "Los factoriales son:";
        cin>> result;*/
        break;
    case 4:
        break;
    default:
        cout << "No existe la opcion\n";
        break;
    
    
    }

    menu();  

}



int main(int argc, char const *argv[])
{
    
menu();
    return 0;
}
