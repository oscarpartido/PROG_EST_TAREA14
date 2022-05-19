/* autor:Oscar Vivaldi Partido Ramirez  realizado: 21/02/2022
contar el numero de enteros negativos introducidos por el teclado, 

-el programa terminara de leer los numeros cuando se introduzca un cero. 
*/
#include <stdio.h>

int main(){
	int i=1,negativo=0, numero;
	
	do{
	
		printf("Introduce el numero %d :",i);
		scanf("%d",&numero);
		

		if(numero<0){
			negativo++;
		}
		i++;
		
	
	}while(numero!=0);
	
	printf("el total de numeros negativos enteros introducidos fueron: %d",negativo);
	
	return 0;
}

