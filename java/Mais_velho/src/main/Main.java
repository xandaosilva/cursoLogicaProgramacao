package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n, maisVelho, posicaoMaisVelho;
		
		System.out.print("Quantas pessoas voce vai digitar? ");
		n = sc.nextInt();
		
		String[] nomes = new String[n];
		int[] idades = new int[n];
		
		for(int i = 0; i < n; i++) {
			System.out.println("Dados da " + (i+1) +"? pessoa: ");
			System.out.print("Nome: ");
			nomes[i] = sc.next();
			System.out.print("Idade: ");
			idades[i] = sc.nextInt();
		}
		
		maisVelho = idades[0];
		posicaoMaisVelho = 0;
		
		for(int i = 1; i < n; i++) {
			if(idades[i] > maisVelho) {
				maisVelho = idades[i];
				posicaoMaisVelho = i;
			}
		}
		
		System.out.println("PESSOA MAIS VELHA: " + nomes[posicaoMaisVelho]);
		sc.close();
	}
}