Proceso ejercicio7
	
	Definir longit, i Como Entero;
    Definir vector1[], vector2[];
    Definir producto_punto Como Real;
	
    // Solicitar al usuario la longitud de los vectores
    Escribir("Ingrese la longitud de los vectores: ");
    Leer longit;
	
    // Solicitar al usuario los elementos del primer vector
    Dimension vector1[longit];
    Escribir("Ingrese los elementos del primer vector:");
    Para i <- 1 Hasta longit Con Paso 1 Hacer
        Escribir "Elemento ", i, ": ";
        Leer vector1[i];
    FinPara
	
    // Solicitar al usuario los elementos del segundo vector
    Dimension vector2[longit];
    Escribir("Ingrese los elementos del segundo vector:");
    Para i = 1 Hasta longit Con Paso 1 Hacer
        Escribir "Elemento ", i, ": ";
        Leer vector2[i];
    FinPara
	
    // Calcular el producto punto
    producto_punto <- 0;
    Para i <- 1 Hasta longit Con Paso 1 Hacer
        producto_punto <- producto_punto + (vector1[i] * vector2[i]);
    FinPara
	
    // Mostrar el resultado del producto punto
    Escribir "El producto punto de los vectores es: ", producto_punto;

	
	
FinProceso
