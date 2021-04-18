package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, quantidadePares;
		
		System.out.print("Quantos numeros voce vai digitar? ");
		n = sc.nextInt();
		
		int[] vet = new int[n];
		
		for(int i = 0; i < n; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextInt();
		}
		
		quantidadePares = 0;
		System.out.println("\nNUMEROS PARES:");
		for(int i = 0; i < n; i++) {
			if(vet[i] % 2 == 0){
				System.out.print(vet[i] + " ");
				quantidadePares++;
			}
		}
		
		
		System.out.println("\n\nQUANTIDADE DE PARES = " + quantidadePares);
		sc.close();
	}
}