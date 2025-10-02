#include <stdio.h>
/*21. Calcule o salário líquido após descontar o INSS (11%)
 e o Imposto de Renda (7.5%). Leia o
salário bruto.*/
int main(){
    float salario_bruto, inss, ir, salario_liquido;
    printf("Digite o salario bruto: ");
    scanf("%f", &salario_bruto);
    inss = salario_bruto * 0.11;
    ir = salario_bruto * 0.075;
    salario_liquido = salario_bruto - inss - ir;
    printf("O salario liquido e: R$ %.2f\n", salario_liquido);
    return 0;
}