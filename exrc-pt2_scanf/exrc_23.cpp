#include <stdio.h>
/*23. Calcule o valor final de um produto que teve dois aumentos percentuais sucessivos. Leia o
preço original, o primeiro percentual de aumento e o segundo percentual.
*/
int main(){
    float preco,perc1,perc2,perc3,aumento1,aumento2,preco_final;
    printf("Digite o preco do produto: ");
    scanf("%f",&preco);
    printf("Digite o primeiro percentual de aumento: ");
    scanf("%f",&perc1);
    printf("Digite o segundo percentual de aumento: ");
    scanf("%f",&perc2);
    aumento1 = (perc1/100)*preco;
    aumento2 = (perc2/100)*(preco + aumento1);
    preco_final = preco + aumento1 + aumento2;
    printf("O preco final do produto e: R$ %.2f\n", preco_final);
    return 0;
}