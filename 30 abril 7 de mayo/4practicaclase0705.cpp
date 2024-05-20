//mostrar los primeros 300 numeros pares
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;
    int cont=0;
    while (cont < 300){//tambien si le poniamos el i estaria bien pero le tendrias que poner <600 en vez de 300
       i++;

        
      if (i %2 == 0){
       // cout<<i<<endl;
       cont++;
        cout<<cont<<" "<<i<<endl;
    }

   }
    
    
    return 0;
}
