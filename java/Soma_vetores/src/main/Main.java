package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		
		System.out.print("Quantos valores vai ter cada vetor? ");
		n = sc.nextInt();
		
		int[] vetA = new int[n], vetB = new int[n], vetC = new int[n];
		
		System.out.println("Digite os valores do vetor A: ");
		for(int i = 0; i < n; i++) {
			vetA[i] = sc.nextInt();
		}
		
		System.out.println("Digite os valores do vetor B: ");
		for(int i = 0; i < n; i++) {
			vetB[i] = sc.nextInt();
		}
		
		for(int i = 0; i < n; i++) {
			vetC[i] = vetA[i] + vetB[i];
		}
		
		System.out.println("VETOR RESULTANTE:");
		for(int i = 0; i < n; i++) {
			System.out.println(vetC[i]);
		}
		
		sc.close();
	}
}