#include <stdio.h>
/*15.Escreva um programa que peça uma letra ao usuário.
 Em seguida, imprima um
quadrado na tela colocando a letra lida no 
centro do quadrado.
---
|B|*/

int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("---\n");
    printf("|%c|\n", letra);
    printf("---\n");
    return 0;
}