import java.util.Scanner;

public class Entradas_e_saidas {
    public static void main(String[] args){
        Scanner entrada = new Scanner(System.in); // scaner é uma classe que permite a entrada pelo teclado 

        System.out.println("Digite seu nome: ");
        String nome = entrada.nextLine();

        System.out.println("Digite sua idade: ");
        int idade = entrada.nextInt();

        System.out.println("Nome: " +nome+ "\nidade: " + idade);

    }
}
