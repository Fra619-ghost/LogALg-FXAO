Proceso ej6
	
	Definir result, num1,num2, suma Como Entero;
	num1<-100;
	num2<-200;
	suma <- 0;
	
	Mientras num1<=num2 Hacer
		si num1 %2 = 0 Entonces
			Escribir num1;
			
			suma<-suma + num1;
			num1<-num1+2;
		FinSi
		
		Escribir "La suma de los numeros pares del 100 al 200 es de: ", suma;
		
		
		
		
		
	FinMientras
FinProceso
