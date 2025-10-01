#include <stdio.h>
// Some dois valores e apresente um resultado.

int main(){
	int num1,num2, soma;
	
	printf("Digite o valor 1: ");
	scanf("%d", &num1);
	printf("Digite o valor 2: ");
	scanf("%d", &num2);
	soma = num1 + num2;
	
	printf("O resultado de%d+%d= %d",num1,num2,soma);
}
