package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, fatorial;
		
		System.out.print("Digite o valor de N: ");
		n = sc.nextInt();
		
		fatorial = 1;
		
		for(int i = n; i >= 1; i--) {
			fatorial = fatorial * i;
		}
		
		
		System.out.println("FATORIAL = " + fatorial);
		sc.close();
	}
}