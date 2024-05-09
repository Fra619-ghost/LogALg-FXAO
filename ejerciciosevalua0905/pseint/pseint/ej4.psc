Proceso ej4
	Definir notas, suma, promedio Como Real;
    Definir contador Como Entero;
	
    // Inicializamos la suma en 0
    suma <- 0;
    // Inicializamos el contador en 1
    contador <- 1;
	
    // Mientras el contador sea menor o igual que 10
    Mientras contador <= 10 Hacer
        // Solicitamos la nota del estudiante actual
        Escribir "Ingrese la nota del estudiante ", contador, ":";
        Leer notas;
        // Sumamos la nota a la suma total
        suma <- suma + notas;
        // Incrementamos el contador en 1 para pasar al siguiente estudiante
        contador <- contador + 1;
    FinMientras
	
    // Calculamos el promedio dividiendo la suma total entre el número de estudiantes
    promedio <- suma / 10;
	
    // Mostramos el promedio general de la sección
    Escribir "El promedio general de la sección es:", promedio;
	
	
FinProceso
