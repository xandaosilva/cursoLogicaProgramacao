package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, maior;
		
		System.out.print("Qual a ordem da matriz? ");
		n = sc.nextInt();
		
		int[][] mat = new int[n][n];
		int[] vetMaior = new int[n];
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				System.out.print("Elemento [" + i + "," + j + "]:");
				mat[i][j] = sc.nextInt();
			}
		}
		
		for(int i = 0; i < n; i++) {
			maior = mat[i][0];
			for(int j = 0; j < n; j++) {
				if(mat[i][j] > maior) {
					maior = mat[i][j];
				}
			}
			vetMaior[i] = maior;
		}
		
		System.out.println("MAIOR ELEMENTO DE CADA LINHA:");
		for(int i = 0; i < n; i++) {
			System.out.println(vetMaior[i]);
		}
		sc.close();
	}
}