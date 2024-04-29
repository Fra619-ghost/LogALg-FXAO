#include<math.h>


int main(int argc, char const *argv[])
{
    float precioauto;
    float iva=0.15;
    float descuento=0.05;
    
    float Totalpaga;
    float Totalpagadescuen;

    printf("\nIngresar precio del vehivulo:");
    scanf("%f", &precioauto);

    Totalpaga=(precioauto*iva)+precioauto;


    printf("\nEl precio a pagar del auto más el IVA es de:%2.f", Totalpaga);

    if(Totalpaga>=25000){
        Totalpagadescuen=Totalpaga-(Totalpaga*descuento);
        printf("\nSe le dara un descuento del cinco porciento");
        printf("\nEl total a pagar con descuento incluido es de:%.2f", Totalpagadescuen);
    }else{
        printf("\nNo recibe descuento");
    }





    return 0;
}
