#include <stdio.h>
/*22. Calcule a área da superfície de um cubo.
 Leia o comprimento da aresta.*/
int main(){
    float aresta, area;
    printf("Digite o comprimento da aresta do cubo: ");
    scanf("%f", &aresta);
    area = 6 * (aresta * aresta);
    printf("A area da superficie do cubo e: %.2f\n", area);
    return 0;
}