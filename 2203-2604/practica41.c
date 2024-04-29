#include<stdio.h>


int producto(variable1,variable2,variable3){




    return 0;
}


void proceso();

int main(int argc, char const *argv[])
{
    proceso();

    return 0;
}



void proceso(){

float price;
float impuesto=0.15;
float descuent=0.05;
float pay;
float payDiscount;



printf("\nIngresar percio del auto que desea comprar:");
scanf("%f", &price);


pay= price+(price*impuesto);

printf("\nTotal a pagar es de:%.2f", price);
printf("\nTotal a pagar más I.V.A: %.2f", pay);


if(pay>=25000){
    payDiscount= pay-(pay*descuent);
    printf("\nTiene descuento");
    printf("\nEl descuento adjunto a su compra es de: %.2f", payDiscount);
}else{
    printf("\nNo tiene descuento");
    printf("\nEl total de la compra sería de: %.2f", pay);
    
}





}