#include <stdio.h>
/*24. Calcule o volume de uma esfera*/
int main(){
    float raio,volume;
    printf("Digite o valor do raio da esfera: ");
    scanf("%f",&raio);
    volume = (4.0/3)*3.14*(raio*raio*raio);
    printf("O volume da esfera e: %.2f\n", volume);
    return 0;
}