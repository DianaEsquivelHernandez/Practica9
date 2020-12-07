/*Practica9		Esquivel Hernandez Diana Karen
 * Fecha de entrega: 07/12/2020*/
//Inclusion de bibliotecas
#include<stdio.h> 
//Funcion principal
int main(){
	//Declaracion de variables de tipo flotante y entero
	float cantidad;
	int N, C1=0, ceros=0, mayor=0;
	//Bloque de instrucciones
	printf("Introduzca el numero de cantidades a contar\n");
	scanf("%i", &N);
	//Estructura de repeticion while
	while(C1<N){
		printf("Introduzca la cantidad:  \n");
		scanf("%f", &cantidad);
	//Estructura de seleccion if-else 
		if(cantidad<=0){
			ceros++;
			C1++;
		}
		else{
			mayor++;
			C1++;
		}
	}
	printf("Menores o iguales a cero: %i\n", ceros);
	printf("Mayores a cero: %i\n", mayor);

return 0;
}
