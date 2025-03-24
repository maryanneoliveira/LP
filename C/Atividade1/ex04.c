//4) Faça um algoritmo que receba três notas e seus respectivos pesos, calcule e mostre a
//média ponderada dessas notas.

#include <stdio.h>

int main(){
    float n1,n2,n3,mediaPonderada;
    float p1,p2,p3;
    
    printf("\nDigite o valor de N1:");
    scanf("%f", &n1);
    
    printf("\nDigite o valor do peso 1:");
    scanf("%f", &p1);
    
    printf("\nDigite o valor de N2:");
    scanf("%f", &n2);
    
    printf("\nDigite o valor do peso 2:");
    scanf("%f", &p2);
    
    printf("\nDigite o valor de N3:");
    scanf("%f", &n3);
    
    printf("\nDigite o valor do peso 3:");
    scanf("%f", &p3);
    
    mediaPonderada = ((n1*p1) +(n2*p2) +(n3*p3)) / (p1+p2+p3);
    printf("Media: Ponderada %.2f", mediaPonderada
