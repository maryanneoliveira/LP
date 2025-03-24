#include <stdio.h>  //importando essa biblioteca que contém funções como print(saída) e scan(entrada)
#include <stdlib.h>

int main(){
   printf("Hello, World!\n"); //mostra algo
   system("pause"); //só vai continuar após o usuário clicar enter

   // Recebendo dados do usuário:
   int idade; 
   printf("Informe sua idade: ");  
   scanf("%i", &idade);

   printf("Você tem:%i anos de idade.\n", idade);

}