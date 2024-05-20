#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;
   
    while (i < 600){//si lo hacemos de esta manera en vez de 300 tendriamos q poner 600 pq solo esta contando hasta el 300 no los primeros
                    //300 numeros pares
        i++;

        
      if (i %2 == 0){
       // cout<<i<<endl;
       //i++;
        cout<<i<<" "<<endl;
    }

   }
    
    
    return 0;
}
