int main(int argc, char const *argv[])
{
    int num;


    printf("Digitar un numero de 1 al 12:");
    scanf("%i", &num);

    switch(num){
        case 115:
        printf("Enero");
        break;
        case 2:
        printf("Febrero");
        break;
        case 3:
        printf("Marzo");
        break;
        case 4:
        printf("Abril");
        break;
        case 5:
        printf("Mayo");
        break;
        case 6:
        printf("Junio");
        break;
        case 7:
        printf("Julio");
        break;
        case 8:
        printf("Agosto");
        break;
        case 9:
        printf("Septiembre");
        break;
        case 10:
        printf("Octubre");
        break;
        case 11:
        printf("Noviembre");
        break;
        case 12:
        printf("Diciembre");
        break;
        default:
        printf("Digitó mal un numero");
    }

    return 0;
}
