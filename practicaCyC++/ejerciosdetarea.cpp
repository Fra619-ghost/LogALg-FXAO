

/*COMO SOLO ES UNA LINEA NO SE NECESITA PONER UNA LLAVE
                            EN C SE PUEDE USAR LAS MISMAS COSAS QUE EN C POR QUE UN LENGUAGE HIJO DEL OTRO(C ES LA MAMA DE C++)
                            POR ESA RAZON SE PUEDE USAR PRINTF, SCANF, EN C++ */


#include<iostream>


using namespace std;

void esPar(int num){
    if(num%2==0)
       printf("Es par");    



}

int main(int argc, char const *argv[])
{
    int num;

    cout << "Ingresa un valor:";
    cin >> num;

    esPar(num);




    return 0;
}
