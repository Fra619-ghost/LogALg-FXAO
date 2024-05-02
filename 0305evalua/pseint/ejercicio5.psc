Proceso ejercicio5
	Definir contador, aprobados, reprobados, puntajeTotal como Entero;
    Definir puntajeEstudiante, promedioGeneral como Real;
	
    // Inicialización de variables
    aprobados <- 0;
    reprobados <- 0;
    puntajeTotal <- 0;
	
    // Ciclo para ingresar los puntajes de los 8 estudiantes
    Para contador <- 1 Hasta 8 Con Paso 1 Hacer
        Escribir "Ingrese el puntaje del estudiante ", contador, ": ";
        Leer puntajeEstudiante;
        puntajeTotal <- puntajeTotal + puntajeEstudiante;
        
        Si puntajeEstudiante >= 70 Entonces
            aprobados <- aprobados + 1;
        Sino
            reprobados <- reprobados + 1;
        FinSi
    FinPara
	
    // Calcular el promedio general
    promedioGeneral <- puntajeTotal / 8;
	
    // Mostrar resultados
    Escribir "Cantidad de alumnos aprobados: ", aprobados;
    Escribir "Cantidad de alumnos reprobados: ", reprobados;
    Escribir "Promedio general del grupo: ", promedioGeneral;
	
	
FinProceso
