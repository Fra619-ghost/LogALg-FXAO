#include<iostream>


using namespace std;

int numeros[3][3];




void proceso();



int main(int argc, char const *argv[])
{

    proceso();
    return 0;
}


void proceso(){

for(int i=0; i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"Digite un numero: ["<<i<<"]["<<j<<"]";
        cin>>numeros[i][j];
    }
}


//imorimr matriz original

for(int i=0; i<3;i++){
    for(int j=0;j<3;j++){
        cout<<numeros[i][j];
    }
    cout<<"\n";
}
//matriz transpuesta
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<numeros[j][i];
    }
    cout<<"\n";
}







}