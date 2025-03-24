//3) Faça um algoritmo que receba três notas, calcule e mostre a média aritmética entre elas.

#include <stdio.h>

int main(){
    float n1,n2,n3,media;
    
    printf("\nDigite o valor de N1:");
    scanf("%f", &n1);
    
    printf("\nDigite o valor de N2:");
    scanf("%f", &n2);
    
    printf("\nDigite o valor de N3:");
    scanf("%f", &n3);
    
    media = (n1+n2+n3) / 3;
    printf("Media: %.2f", media);
}
