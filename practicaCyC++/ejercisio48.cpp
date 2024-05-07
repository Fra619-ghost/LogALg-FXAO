#include<iostream>


using namespace std;

int factoriales(int num){
if(num==0){
    return 1;
}else{
    num=num*factoriales(num-1);
}

return num;

}

void proceso();



int main(int argc, char const *argv[])
{
    proceso();
    return 0;
}


void proceso(){
    int num;
    int result;

    cout<<"Ingresar numero al cual quieres sacar su factorial";
    cin>>num;

    result=num*factoriales(num-1);

    cout<<"El resultado es:"<<result<<endl;




}