//2)Faça um algoritmo que receba quatro números inteiros, calcule e mostre a soma desses
//números.

#include <stdio.h>

int main(){
    int n1,n2,n3,n4,soma;
    
    printf("\nDigite o valor de N1:");
    scanf("%i", &n1);
    
    printf("\nDigite o valor de N2:");
    scanf("%i", &n2);
    
    printf("\nDigite o valor de N3:");
    scanf("%i", &n3);
    
    printf("\nDigite o valor de N4:");
    scanf("%i", &n4);
    
    soma = n1 + n2 + n3 + n4;
    printf("Resultado: %i",soma );
}
