//10) O cardápio de uma lanchonete é dado abaixo. Prepare um algoritmo que leia a quantidade
//de cada item que você consumiu e calcule a conta final.

  //Hambúrguer................. R$ 3,00
 //Cheeseburger.............. R$ 2,50
 //Fritas........................... R$ 2,50
 //Refrigerante................. R$ 1,00
 
 #include <stdio.h> 
 
 int main(){
     float hamburguer = 3.00;
     float cheeseburguer = 2.50;
     float fritas = 2.5;
     float refrigerante = 1.00;
     
    int quantidade;
    float conta = 0;
    
    printf("Quantos hamburguers voce irá querer? ");
    scanf("%i", &quantidade);
    conta = conta + (quantidade * hamburguer);
    
    printf("\nQuantos cheeseburguers voce irá querer? ");
    scanf("%i", &quantidade);
    conta = conta + (quantidade * cheeseburguer);
    
    printf("\nQuantas fritas voce irá querer? ");
    scanf("%i", &quantidade);
    conta = conta + (quantidade * fritas);
    
    printf("\nQuantos refrigerantes voce irá querer? ");
    scanf("%i", &quantidade);
    conta = conta + (quantidade * refrigerante);
    
    printf("Total: %.2f", conta);
    
 }
