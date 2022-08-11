#include <stdio.h>

	/* Dado um valor inteiro positivo que represente um montante de segundos,
	 converter o montante para o formato hh:mm:ss
	*/
	 
	 int main(){
	 	
	 int segundos, minutos, horas;
	 printf("Informe a quantidade de segundos :");
	 scanf("%d",&segundos);
	 
	 horas = segundos / 3600;
	 minutos = segundos % 3600/60;
	 segundos = segundos % 3600 % 60;
	 
	 printf("%02d:%02d:%02d", horas, minutos, segundos);

	 }
	 

