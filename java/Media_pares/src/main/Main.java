package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, quantidadePares = 0;
		double somaPares = 0, media;
		
		System.out.print("Quantos elementos vai ter o vetor? ");
		n = sc.nextInt();
		
		int[] vet = new int[n];
		
		for(int i = 0; i < n; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextInt();
		}
		
		for(int i = 0; i < n; i++) {
			if(vet[i] % 2 == 0) {
				somaPares = somaPares + vet[i];
				quantidadePares++;
			}
		}
		
		if(quantidadePares == 0) {
			System.out.println("NENHUM NUMERO PAR");
		}
		else {
			media = (double) somaPares/quantidadePares;
			System.out.println("MEDIA DOS PARES = " + String.format("%.1f", media));
		}
		sc.close();
	}
}