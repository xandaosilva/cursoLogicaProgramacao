package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, x;
		
		System.out.print("Quantos numeros voce vai digitar? ");
		n = sc.nextInt();
		
		for(int i = 0; i < n; i++) {
			System.out.print("Digite um numero: ");
			x = sc.nextInt();
			
			if(x == 0) {
				System.out.println("NULO");
			}
			else if(x > 0) {
				if(x % 2 == 0) {
					System.out.println("PAR POSITIVO");
				}
				else {
					System.out.println("IMPAR POSITIVO");
				}
			}
			else {
				if(x % 2 == 0) {
					System.out.println("PAR NEGATIVO");
				}
				else {
					System.out.println("IMPAR NEGAITIVO");
				}
			}
		}
			
		sc.close();
	}
}