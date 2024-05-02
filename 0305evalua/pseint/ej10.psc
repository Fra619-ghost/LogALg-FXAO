Proceso ej10
	Definir matriz[100, 100] Como Entero;
    Definir transpuesta[100, 100] Como Entero;
    Definir filas, columnas Como Entero;
    Definir i, j Como Entero;
    
    Escribir "Ingrese el número de filas de la matriz:";
    Leer filas;
    
    Escribir "Ingrese el número de columnas de la matriz:";
    Leer columnas;
    
    Escribir "Ingrese los elementos de la matriz:";
    Para i <- 1 Hasta filas Hacer
        Para j <- 1 Hasta columnas Hacer
            Escribir "Ingrese el elemento en la posición [", i, ",", j, "]:";
            Leer matriz[i, j];
        Fin Para
    Fin Para
    
    Para i <- 1 Hasta columnas Hacer
        Para j <- 1 Hasta filas Hacer
            transpuesta[i, j] <- matriz[j, i];
        Fin Para
    Fin Para
    
    Escribir "La matriz transpuesta es:";
    Para i <- 1 Hasta columnas Hacer
        Para j <- 1 Hasta filas Hacer
            Escribir transpuesta[i, j];
            Si j < filas Entonces
                Escribir ", ";
            Fin Si
        Fin Para
        Escribir "";
    Fin Para
	
	
 


	
FinProceso
