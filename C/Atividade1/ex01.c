//1) Escrever um algoritmo que pergunta um valor em metros e imprime o correspondente em
// centímetros e milímetros.
#include <stdio.h>

int main(){
    float m,c,d,mm;
    
    printf("*CONVERSOR*");
    printf("Digite o valor em Metro: ");
    scanf("%f", &m);
    printf("Valor em Metro: %.2f\n", m);
    
    d = m*10;
    c = m*100;
    mm = m*1000;
    
    printf("Decimetro: %.2f\n", d);
    printf("Centimetro: %.2f\n", c);
    printf("Milimetro: %.2f\n", mm);
}