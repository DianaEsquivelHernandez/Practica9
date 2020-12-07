/*Practica 9		Esquivel Hernandez Diana Karen
*Fecha de entrega: 07/12/2020*/
//Inclusion de bibliotecas
#include<stdio.h>
//Funcion principal
int main(){
//Declaracion de variables tipo entero
	int C, pares=0;
//Bloque de instrucciones
	printf("Numeros pares que se encuentran entre el 0 y el 100\n");
//Estructura de repeticion while
	while(C<=49){
		pares+=2;
		printf("%i\n", pares);
		C++;
	}
	return 0;
}
