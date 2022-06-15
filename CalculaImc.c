#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float peso, altura, IMC;
	
	printf("Insira sua altura: \n");
	scanf("%f", &altura);
	
	printf("Insira seu Peso: \n");
	scanf("%f", &peso);
	
	IMC = peso / (altura * altura);
	
	printf("Seu IMC e: %.2f.\n", IMC);
	
	if(IMC < 21.0){
		printf("Abaixo do peso");
	} else { 
			if(IMC > 30.75){
				printf("Obesa");
			}
			else{
					printf("Peso padrao. \n");
			}
	}
	
} 