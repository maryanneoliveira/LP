//11) Uma companhia de carros paga a seus empregados um salário de R$ 500,00 por mês mais
//uma comissão de R$ 50,00 para cada carro vendido e mais 5% do valor da venda. Elabore um
//algoritmo para calcular e imprimir o salário do vendedor num dado mês recebendo como dados
//de entrada o nome do vendedor, o número de carros vendidos e o valor total das vendas.

#include <stdio.h>
int main(){
    char nome[50];
    int numero_de_carros_vendidos;
    float total_de_vendas;
    float salario_fixo = 500;
    float salario;

    printf("\nQual seu nome? ");
    scanf("%s",nome);
    printf("\nQuantos carros você vendeu? ");
    scanf("%i", &numero_de_carros_vendidos);
    printf("\nQual o valor total das vendas? ");
    scanf("%f", &total_de_vendas);

    salario = salario_fixo+ (50 * numero_de_carros_vendidos) + ( total_de_vendas * 0.05);

    printf("Seu salario será de: %.2f" , salario);

}
