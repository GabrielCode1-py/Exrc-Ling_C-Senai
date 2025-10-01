#include <stdio.h>
//Crie um algortimo que leia o nome, sobre nome e idade e os concatene e moste na tela.
#include <string.h>
int main(){
    
    char nome[30], sobreNome[30], nomeCompleto[60];
    int idade; 
    
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove newline character if present
    
    printf("Digite seu sobre nome: ");
    fgets(sobreNome, sizeof(sobreNome), stdin);
    sobreNome[strcspn(sobreNome, "\n")] = 0; // Remove newline character if present
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    // Concatenate name and surname
    snprintf(nomeCompleto, sizeof(nomeCompleto), "%s %s", nome, sobreNome);
    
    printf("Nome Completo: %s\n", nomeCompleto);
    printf("Idade: %d anos\n", idade);

    printf("Bora, que devemos alcançar a glória, ainda serei um Dev. System!");
    
    return 0;
}