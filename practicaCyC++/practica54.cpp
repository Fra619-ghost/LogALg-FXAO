#include<iostream>

using namespace std;



int factoriales(int num){
    int facto;

    if(num==0){
        facto=1;
        


    }else{
        facto=num*factoriales(num-1);
    }


return facto;

}



int main(int argc, char const *argv[])
{
    int result;
    int num;
    cout<<"Agrega un numero:"<<endl;
    cin>>num;

    cout<<factoriales(3)<<endl;



    result=num*factoriales(num-1);

    cout<<"Resultado:"<<result<<endl;
    return 0;
}
