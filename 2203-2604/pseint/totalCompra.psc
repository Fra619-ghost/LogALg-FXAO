Proceso totalCompra
	Definir numeroProductos Como Entero;
	Definir precioUnidad Como Entero;
	Definir resultado Como Entero;
	
	
	Escribir "Ingresar cantidad de productos";
	Leer numeroProductos;
	Escribir "Ingresar precio del producto";
	Leer precioUnidad;
	
	
	resultado <- numeroProductos*precioUnidad;
	
	Escribir "El precio a pagar es de:",resultado;
	
FinProceso
