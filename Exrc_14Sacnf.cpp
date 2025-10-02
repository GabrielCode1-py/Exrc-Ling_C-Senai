#include <stdio.h>
/*14. Leia 4 variáveis A, B, C e D. A seguir, 
calcule e mostre a diferença do produto de A e
B pelo produto de C e D (A*B-C*D).*/
int main() {
    int A, B, C, D; //variaveis inteiras
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    printf("Digite o valor de D: ");
    scanf("%d", &D);

    int resultado = (A * B) - (C * D);
    printf("A diferenca do produto de A e B pelo produto de C e D e: %d\n", resultado);

    return 0;
}