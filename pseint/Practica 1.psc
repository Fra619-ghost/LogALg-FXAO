

Proceso calcularEdad
	Definir birthDay,currentYear,age Como Entero;
	currentyear<-2024;
	Definir actualWeigth , changePounds , weightPounds Como Real;
	Escribir " Bienvenido al sistema";
	Escribir "UAM- Vamos Jaguares";
	//Escribir "El año actual es: ", currentyear;
	Escribir "Año de nacimiento";
	Leer Birthday;
	//Escribir "Año actual";
	//Leer currentyear;
	Escribir "¿Cúal es tu peso?";
	Leer actualWeigth;
	changePounds<-2.2;
	//Escribir " El cambio de kilos a libras es:",changePounds;
	//currentyear<-2024;
	age<-currentyear-Birthday;
	weightPounds<-actualWeigth*changePounds;
	Escribir  " Edad:", age , ", Año actual ", currentyear, " ,el año de nacimiento es: ", Birthday ;
	Escribir "Tu peso en libras es:", weightPounds, ",Cambio de kilos a libras es: ",changePounds ,",Peso en kg:", actualWeigth;
	

FinProceso
