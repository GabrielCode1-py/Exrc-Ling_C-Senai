#include <stdio.h>
//
//
//

int main(){
	
	int num1,num2,soma,sub,mult;
	
	printf("Digite o valor 1:");
	scanf("%d",&num1);
	printf("\nDigite o valor 2: ");
	scanf("%d",&num2);
	
	soma = num1 + num2;
	mult = num1 * num2;
	sub = num1 - num2;
	
	printf("O resultado da adicao %d+%d e = %d\n",num1,num2,soma);
	printf("O reusltado da multiplicacao %dx%d e = %d\n",num1,num2,mult);
	printf("O resultado da subtracao %d-%d e = %d",num1,num2,sub);
}
