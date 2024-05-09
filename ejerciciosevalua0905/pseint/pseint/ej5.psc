Proceso ej5
	
	
	Definir promedio, notas,aprobados, reprobados, suma Como Real;
	Definir contador Como Entero;
	
	contador<-1;
	suma<-0;
	aprobados<-0;
	reprobados<-0;
	
	
	Mientras contador <= 8 Hacer
		Escribir "Agregar las notas de cada estudiante: ";
		Leer notas;
		
		suma <- suma+notas;
		
		si notas >= 70 Entonces
			aprobados<-aprobados+1;
			
		SiNo
			reprobados<-reprobados+1;
			
		FinSi
		contador<- contador+1;
		
		promedio<-suma/8;
		
		Escribir "El promedio de la seccion es de: ", promedio;
		Escribir "La cantidad de alumnos aprobados son : ", aprobados;
		Escribir "La cantidad de alumnos reprobados son : ", reprobados;
	FinMientras
	
	
	
	
	
	
	
FinProceso
