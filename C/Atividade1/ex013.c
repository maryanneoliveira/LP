//13) Escreva um algoritmo para ler o número total de eleitores de um município, o número de
//votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em
//relação ao total de eleitores.
#include <stdio.h>

int main(){
    float total_de_eleitores, brancos, nulos, validos;

    float perc_brancos, perc_nulos, perc_validos;
    

    printf("\nQual o total de eleitores? ");
    scanf("%f", &total_de_eleitores);
    printf("\nQual o total de votos brancos? ");
    scanf("%f", &brancos);
    printf("\nQual o total de votos nulos? ");
    scanf("%f", &nulos);
    printf("\nQual o total de votos validos? ");
    scanf("%f", &validos);

    perc_brancos = (brancos/total_de_eleitores) * 100;

    perc_nulos = (nulos/total_de_eleitores) * 100;

    perc_validos = (validos/total_de_eleitores)*100;
  
    printf("\nPercentual de:");
    printf("\nBrancos: %.2f%%", perc_brancos);
    printf("\nNulos: %.2f%%", perc_nulos);
    printf("\nValidos: %.2f%%", perc_validos);
    
}
