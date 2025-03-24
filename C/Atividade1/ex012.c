//12) Faça um algoritmo que calcule a área e o perímetro de um retângulo. As entradas do
//programa serão a largura e a altura do retangulo.

#include <stdio.h>

int main(){
    float largura,altura;
    float area, perimetro;

    printf("\nQual a largura? ");
    scanf("%f", &largura);
    printf("\nQual a altura? ");
    scanf("%f", &altura);

    area = largura * altura;
    perimetro = 2 * (largura + altura);

    printf("\nArea: %.2f", area);
    printf("\nPerimetro: %.2f", perimetro);
}
