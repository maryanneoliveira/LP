#include <stdio.h>
#define slogan "Calculadora de IMC"

int main(){
    printf("%s \n", slogan);

    char nome[50];
    char sexo;
    int idade;
    float altura;
    float peso;

    printf("Bem-vindo(a)!\n");
    printf("Para iniciar, informe seu nome: ");
    scanf("%s",nome);

    printf("Sexo: (digite \"F\" para fem e \"M\" para masc:)  ");

    scanf(" %c", &sexo);

    printf("Qual a sua idade? ");
    scanf("%i", &idade);

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    printf("Qual seu peso? ");
    scanf(" %f", &peso);

    printf("nome: %s\n",nome);
    printf("sexo: %c\n",sexo);
    printf("idade: %i\n",idade);
    printf("altura: %.2f\n",altura);
    printf("peso: %.2f\n",peso);



}