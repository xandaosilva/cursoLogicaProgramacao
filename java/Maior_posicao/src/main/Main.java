package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, posicao;
		double maior;
		
		System.out.print("Quanto numeros voce vai digitar? ");
		n = sc.nextInt();
		
		double[] vet = new double[n];
		
		for(int i = 0; i < n; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextDouble();
		}
		
		maior = vet[0];
		posicao = 0;
		
		for(int i = 0; i < n; i++) {
			if(vet[i] > maior){
				maior = vet[i];
				posicao = i;
			}
		}
		
		System.out.println("\nMAIOR VALOR = " + String.format("%.1f", maior));
		System.out.println("POSICAO DO MAIOR VALOR = " + posicao);
		sc.close();
	}
}