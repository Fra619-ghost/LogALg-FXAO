Proceso ej7
	
	Definir longit, i , num1, suma Como Entero;
    Dimension vector1[100];
	Dimension vector2[100];
	//Dimension vector3[100];
	
	suma<-0;
	i<-0;
	
	Escribir "Digita la longitud de los vectores";
	leer longit;
	
	Mientras i<longit Hacer
		Escribir "Digitar los elementos del vector";
		Leer vector1[i];
		
		i<-i+1;
	FinMientras
	i<-0;
	
	Mientras i<longit Hacer
		Escribir "Digitar los elementos del vector";
		Leer vector2[i];
		
		i<-i+1;
	FinMientras
	i<-0;
	
	Mientras i< longit Hacer
		suma<- vector1[i]+vector2[i];
		
		i<-i+1;
	FinMientras
	
	Mientras i < longit Hacer
		
		Escribir suma;
		i <- i + 1;
	FinMientras
	
	
	
	
	
    
FinProceso
