Proceso calcularPesoEnLibras
	Definir pesoKilogramos Como Real;
	Definir cambioLibras Como Real;
	Definir pesoEnLibras Como Real;
	Escribir 'Buenas Bienvenido';
	Escribir 'Ingresar tu peso(enkg):';
	Leer pesoKilogramos;
	Escribir 'Ingresar cambio de kg a libras';
	Leer cambioLibras;
	pesoEnLibras <- pesoKilogramos*cambioLibras;
	Escribir 'Tu peso en libras es de:', pesoEnLibras;
FinProceso
