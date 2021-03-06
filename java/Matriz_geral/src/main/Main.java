package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, linha, coluna;
		double somaPositivos;
		
		System.out.print("Qual a ordem da matriz? ");
		n = sc.nextInt();
		
		double[][] mat = new double[n][n];
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				mat[i][j] = sc.nextDouble();
			}
		}
		
		somaPositivos = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(mat[i][j] > 0) {
					somaPositivos = somaPositivos + mat[i][j];
				}
			}
		}
		
		System.out.println("\nSOMA DOS POSITIVOS: " + String.format("%.1f", somaPositivos));
		
		System.out.print("\nEscolha uma linha: ");
		linha = sc.nextInt();
		System.out.print("LINHA ESCOLHIDA:");		
		for(int i = 0; i < n; i++) {
			System.out.print(String.format("%.1f", mat[linha][i]) + " ");
		}
		
		System.out.print("\n\nEscolha uma coluna: ");
		coluna = sc.nextInt();
		System.out.print("COLUNA ESCOLHIDA:");		
		for(int i = 0; i < n; i++) {
			System.out.print(String.format("%.1f", mat[i][coluna]) + " ");
		}
		
		System.out.println("\n\nDIAGONAL PRINCIPAL:");
		for(int i = 0; i < n; i++) {
			System.out.print(String.format("%.1f",mat[i][i]) + " ");
		}
		
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(mat[i][j] < 0) {
					mat[i][j] = Math.pow(mat[i][j], 2);
				}
			}
		}
		
		System.out.println("\n\nMATRIZ ALTERADA:");
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
					System.out.print(String.format("%.1f", mat[i][j]) + " ");
			}
			System.out.println();
		}
		
		sc.close();

	}

}
