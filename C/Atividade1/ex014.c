//14) Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de
//reajuste. Calcular e escrever o valor do novo salário.

#include <stdio.h>
int main(){
    float salario_atual, novo_salario, percentual;

    printf("\nQual o seu salario atual? ");
    scanf("%f", &salario_atual);

    printf("\nQual o percentual? ");
    scanf("%f", &percentual);

    novo_salario = salario_atual * (1+percentual/100);

    printf("\nNovo salário: %.2f", novo_salario);

}
