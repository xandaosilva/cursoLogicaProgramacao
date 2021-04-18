package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int m, n;
		
		System.out.print("Quantas linhas vai ter cada matriz? ");
		m = sc.nextInt();
		System.out.print("Quantas colunas vai ter cada matriz? ");
		n = sc.nextInt();
		
		int [][] matA = new int[m][n], matB = new int[m][n], matC = new int[m][n]; 
		
		
		System.out.println("Digite os valores da matriz A:");
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				System.out.print("Elemento [" + i + "," + j +"]: ");
				matA[i][j] = sc.nextInt();
			}
		}
		
		System.out.println("Digite os valores da matriz B:");
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				System.out.print("Elemento [" + i + "," + j +"]: ");
				matB[i][j] = sc.nextInt();
			}
		}
		
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				matC[i][j] = matA[i][j] + matB[i][j];
			}
		}
		
		System.out.println("MATRIZ SOMA:");
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				System.out.print(matC[i][j] + " ");
			}
			System.out.println("");
		}
		sc.close();
	}
}