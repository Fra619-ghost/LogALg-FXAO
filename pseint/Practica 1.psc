

Proceso calcularEdad
	Definir birthDay,currentYear,age Como Entero;
	currentyear<-2024;
	Definir actualWeigth , changePounds , weightPounds Como Real;
	Escribir " Bienvenido al sistema";
	Escribir "UAM- Vamos Jaguares";
	//Escribir "El a�o actual es: ", currentyear;
	Escribir "A�o de nacimiento";
	Leer Birthday;
	//Escribir "A�o actual";
	//Leer currentyear;
	Escribir "�C�al es tu peso?";
	Leer actualWeigth;
	changePounds<-2.2;
	//Escribir " El cambio de kilos a libras es:",changePounds;
	//currentyear<-2024;
	age<-currentyear-Birthday;
	weightPounds<-actualWeigth*changePounds;
	Escribir  " Edad:", age , ", A�o actual ", currentyear, " ,el a�o de nacimiento es: ", Birthday ;
	Escribir "Tu peso en libras es:", weightPounds, ",Cambio de kilos a libras es: ",changePounds ,",Peso en kg:", actualWeigth;
	

FinProceso
