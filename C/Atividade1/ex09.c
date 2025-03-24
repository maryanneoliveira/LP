//9) Leia uma quantidade de chuva dada em polegadas e imprima o equivalente em milímetros
//(25,4 mm = 1 polegada).

#include <stdio.h>

int main(){
    float polegada, mm;
    
    printf("Digite a quantidade de chuva em polegadas: ");
    scanf("%f", &polegada);
    
    mm = polegada * 25.4;
    printf("Quantidade em mm: %.2f", mm);
    
    
}
