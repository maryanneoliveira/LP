//7) Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o
//valor correspondente em graus Celsius.

#include <stdio.h>

int main(){
    float Fahrenheit, Celsius;
    
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    
    Celsius = ((Fahrenheit-32)/9)*5;
    printf("Celsius: %.2f", Celsius);
    
    
}
