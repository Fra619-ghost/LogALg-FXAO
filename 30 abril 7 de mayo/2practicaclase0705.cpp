//contar 10 numeros
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i=1;
    while(i<=10){//el true no sale explicitamente pero siempre esta ya q mientras lo q esta en el parenresis sea verdadero se va a hacer
        cout<<i<<endl;
        i++; //este es como el for que siempre tiene de cuanto en cuanto va a ir, solo q este se pone separado
            //Todos los ciclos tienen las misma estructura: inicio,alto y incremento

    }
//solo para diferenciar el for y el while que hacen la misma funcion pero no son lo mismo
    for(int i=1;i<10;i++){
        cout<<i<<endl;
    }
    
    return 0;
}
