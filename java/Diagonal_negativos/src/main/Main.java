package main;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, negativos;
		
		System.out.print("Qual a ordem da matriz? ");
		n = sc.nextInt();
		
		int[][] mat = new int[n][n];
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				System.out.print("Elemento [" + i + "," + j + "] :");
				mat[i][j] = sc.nextInt();
			}
		}
		
		System.out.println("DIAGONAL PRINCIPAL: ");
		for(int i = 0; i < n; i++) {
			System.out.print(mat[i][i] + " ");
		}
		
		negativos = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(mat[i][j] < 0) {
					negativos++;
				}
			}
		}
		
		System.out.println();
		System.out.println("QUANTIDADE DE NEGATIVOS = " + negativos);
		sc.close();
	}
}