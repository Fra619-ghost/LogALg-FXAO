#include<iostream>


using namespace std;


void proceso();



int main(int argc, char const *argv[])
{
    proceso();

    return 0;
}



void proceso(){

    int distancia;
    int pagodistnacia=30;
    float pagoextra=0.05;
    float pagoextradb=0.08;
    //float IVA=0.15;
    float pagoDistancia1;
    float pagoDistancia2;
    //loat pagoDistancia3;


    cout << "\nIngresar por favor la distancia que recorrió con uno de nuestros vehiculos:";
    cin >> distancia;


        if(distancia<=499){
            cout<< "EL monto a pagar es de: 30 dólares";
            //pagoDistancia3=pagodistnacia;
            
           //cout<< "El total a pagar es de:"<< pagoDistancia3;
            
            
        }else if(distancia>=501 || distancia<=1000){
                pagoDistancia1=pagodistnacia*(pagodistnacia*pagoextra);

            cout << "Se debe pagar los 30 dólares originales más un impuesto por exceder la distancia acordada"<<endl;
            cout << "El pago final es de:"<< pagoDistancia1;

        }if(distancia>=1001){

            pagoDistancia2=pagodistnacia*(pagodistnacia*pagoextradb);

            cout << "Recorrió dos veces más de la distancia acordada, se le agregara un impuesto adicional del 8 porciento al precio original de 30 dólares"<<endl;
            cout << "El pago final es de:"<< pagoDistancia2;

        }








    
}