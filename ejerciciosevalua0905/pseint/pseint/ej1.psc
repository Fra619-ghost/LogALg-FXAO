Proceso ej1
	Definir n, suma, contador Como Entero;
	
    Escribir "Ingrese un número natural:";
    Leer n;
	
    // Inicializamos la suma y el contador
    suma <- 0;
    contador <- 1;
	
    // Mientras el contador sea menor o igual que n
    Mientras contador <= n Hacer
        // Sumamos el valor actual del contador a la suma
        suma <- suma + contador;
        // Incrementamos el contador en 1
        contador <- contador + 1;
    FinMientras
	
    Escribir "La suma de los números naturales desde 1 hasta ", n, " es: ", suma;

	
FinProceso
