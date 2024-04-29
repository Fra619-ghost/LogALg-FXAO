Proceso precioIVA
	
	Definir totalCompra Como Entero;
	Definir resultado Como Real;
	Definir montoPagar Como Real;
	Definir iva Como Real;
	
	
	iva<- 0.15;
	
	Escribir "Ingresar compra para sacarle el IVA";
	Leer totalCompra;
	
	
	resultado<- totalCompra*iva;
	montoPagar<- resultado+totalCompra;
	
	Escribir "El IVA de la compra total es de:", resultado;
	Escribir "El total a pagar por la compra es de:", montoPagar;
	
FinProceso
