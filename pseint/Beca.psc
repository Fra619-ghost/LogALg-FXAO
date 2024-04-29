Proceso Beca
	
	Definir mat Como Entero;
	Definir lengua Como Entero;
	Definir fisica Como Entero;
	Definir quimica Como Entero;
	Definir sociales Como Entero;
	Definir promedio Como Entero;
	
	Escribir "Agregar notas de matemetica";
	Leer mat;
	Escribir "Agregar notas de lengua";
	Leer lengua;
	Escribir "Agregar notas de fisica";
	Leer fisica;
	Escribir "Agregar notas de quimica";
	Leer quimica;
	Escribir "Agregar notas de sociales";
	Leer sociales;
	
	
	promedio<-(mat+lengua+fisica+quimica+sociales)/5;
	
	si promedio>85 Entonces
		Escribir "Felicidades";
	SiNo
		Escribir "Animo para la proxima";
	FinSi
	
	
	Escribir "Tu promedio es de:", promedio;
	
	
	
	
	
	
	
	
FinProceso
