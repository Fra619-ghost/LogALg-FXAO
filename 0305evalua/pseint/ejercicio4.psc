Proceso ejercicio4
	Definir contador, puntajeTotal como Entero;
    Definir puntajeEstudiante, promedioGeneral como Real;
	
    // Inicializaci�n de variables
    puntajeTotal <- 0;
	
    // Ciclo para ingresar los puntajes de los 10 estudiantes
    Para contador <- 1 Hasta 10 Con Paso 1 Hacer
        Escribir "Ingrese el puntaje del estudiante ", contador, ": ";
        Leer puntajeEstudiante;
        puntajeTotal <- puntajeTotal + puntajeEstudiante;
    FinPara
	
    // Calcular el promedio general
    promedioGeneral <- puntajeTotal / 10;
	
    // Mostrar el promedio general
    Escribir "El promedio general de la secci�n es: ", promedioGeneral;

	
	
FinProceso
