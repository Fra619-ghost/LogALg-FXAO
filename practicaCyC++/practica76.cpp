#include<iostream>


using namespace std;


int escribeNumeros(int ini, int fin){
    int result;

    if(ini==fin){
        result=ini;
    }else{
        result=escribeNumeros(ini,fin-1);
        cout<<fin;
    }



return result;

}

int main(int argc, char const *argv[])
{
    int result;
    int ini;
    int final;
    //int result2;
    //int num;

    cout<<"Ingresar el valor inicial: "<<endl;
    cin>>ini;
    cout<<"Ingresar valor final: "<<endl;
    cin>>final;

    result=escribeNumeros(ini,final-1);
    

    cout<<result<<endl;






    return 0;
}
