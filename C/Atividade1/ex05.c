// 5) Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
//a) o número digitado ao quadrado;
//b) o número digitado ao cubo;
//c) a raiz quadrada do número digitado;
//d) a raiz cúbica do número digitado.

#include <stdio.h>
#include <math.h>

int main(){
    

    float n1, n1_qua, n1_cub, n1_raiz_qua, n1_raiz_cub;
    
    printf("Digite um numéro: ");
    scanf("%f", &n1);
    
    n1_qua = pow(n1,2);
    n1_cub = pow(n1,3);
    n1_raiz_qua = sqrt(n1);
    n1_raiz_cub = cbrt(n1);
    
    printf("%.2f ao quadrado: %.2f\n", n1 ,n1_qua);
    printf("%.2f ao cubo: %.2f\n", n1 ,n1_cub);
    printf("raiz quadrada de %.2f: %.2f\n", n1 ,n1_raiz_qua);
    printf("raiz cúbica de %.2f: %.2f\n", n1 ,n1_raiz_cub);
    
}
