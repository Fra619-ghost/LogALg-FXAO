/*CALCULAR LA NOTA DE UN ESTUDIANTE QUE POSEE UN ACUMULADO DE 60 PTS Y UN EXAMEN DE 40PTS
DECIR SI ESTA APROBADO Y DESPROBADO
UN ESTUDIANTE APRUEBA SI SU NOTA FINAL ES IGUAL O MAYOR A 70*/

#include <stdio.h>


//int finalscoresc(int score, int exam);
int finalscoresc(int score, int exam){
     return score + exam;
}



void valFinalsc(int score);

void pedirNotas();

/*int finalscoresc(score,exam){
return score+exam;
}*/

int main(int argc, char const *argv[])
{
    pedirNotas();
    
    
    
    return 0;
}


void pedirNotas(){
    int score,exam,Notafinal;
    
    /*int score;
    int exam;
    int Notafinal;*/
    printf("Dime tu acumulado");
    scanf("%d", &score);
    printf("Dame tu nota del examen");
    scanf("%d", &exam);

    Notafinal = finalscoresc(score,exam);

    printf("Nota final %d", Notafinal);


    

}
    /*int finalscoresc(int score, int exam){
return score + exam;
}*/

void valFinalsc(int score){
    if(score >= 70)
    printf("Aprobado");
else
    printf("desaprobado");
}

//SE PUEDE HACER TODO EN EL MAIN(LO QUE SE HIZO EN EL VOID) MEJOR HACERLO EN SEGUIDO Y EN EL MAIN