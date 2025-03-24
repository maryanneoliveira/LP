// 6) Faça um programa que leia um valor representando um número de segundos. Em seguida
//converta-o para horas, minutos e segundos na forma:
   //7322 segundos são 2 horas, 2 minutos e 2 segundos.
   
#include <stdio.h>

int main(){
    int seg;
    int  hr, min, segundos;
    
    printf("Digite o numéro de segundos: ");
    scanf("%i", &seg);
    
    hr = (seg / 3600);
    min = (seg % 3600) / 60;
    segundos =  seg % 60;
    
    printf("%i segundos equivalem a %i horas, %i minutos e %i segundos.\n", seg, hr, min, segundos);
    
    
}
