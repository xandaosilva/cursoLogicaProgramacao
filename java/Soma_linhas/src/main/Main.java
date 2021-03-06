package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int m,n;
		double somaLinha;
		
		System.out.print("Qual a quantidade de linhas da matriz? ");
		m = sc.nextInt();
		System.out.print("Qual a quantidade de colunas da matriz? ");
		n = sc.nextInt();
		
		double[][] mat = new double[m][n];
		double[] vet = new double[m];
		
		for(int i = 0; i < m; i++) {
			System.out.println("Digite os elementos da " + (i+1) + "? linha:");
			for(int j = 0; j < n; j++) {
				mat[i][j] = sc.nextDouble();
			}
		}
		
		for(int i = 0; i < m; i++) {
			somaLinha = 0;
			for(int j = 0; j < n; j++) {
				somaLinha = somaLinha + mat[i][j];
			}
			vet[i] = somaLinha;
		}
		
		System.out.println("VETOR GERADO:");
		for(int i = 0; i < m; i++) {
			System.out.println(String.format("%.1f", vet[i]));
		}
		
		sc.close();
	}
}