//15) O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem
//do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do
//distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de
//fábrica de um carro, calcular e escrever o custo final ao consumidor.

#include <stdio.h>

int main(){
    float custo_fab, lucro_dist, lucro_imposto;
    float porc_dist = 28/100;
    float imposto = 45/100;
    float custo_final;

    printf("\nQual o custo da fabrica? ");
    scanf("%f", &custo_fab);

    lucro_dist = (28.0/100 *(custo_fab));
    lucro_imposto = (45.0/100*(custo_fab));
    custo_final = custo_fab + lucro_dist + lucro_imposto;

    printf("O custo final é de: %.2f", custo_final);
}
