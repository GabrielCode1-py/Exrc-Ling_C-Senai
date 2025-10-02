#include <stdio.h>
/*13.Um garrafão de 20 litros, cheio de água, 
está com um furo que vaza 50ml a cada 30
minutos. Faça um programa para calcular em 
quantas horas o garrafão estará vazio.*/

int main(){
    int litros = 20; // capacidade do garrafão em litros
    int vazamento_ml = 50; // vazamento em mililitros a cada    30 minutos
    int tempo_minutos = 0; // tempo em minutos 
    int capacidade_ml = litros * 1000; // capacidade do garrafão em mililitros

    while (capacidade_ml > 0) {
        capacidade_ml -= vazamento_ml;
        tempo_minutos += 30;
    }

    int tempo_horas = tempo_minutos / 60;
    printf("O garrafao estara vazio em %d horas.\n", tempo_horas);

    return 0;
}
