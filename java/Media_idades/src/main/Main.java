package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		
		Scanner sc = new Scanner(System.in);
		int x, quantidade, soma;
		double media;
		
		System.out.println("Digite as idades:");
		x = sc.nextInt();
		
		soma = 0;
		quantidade = 0;
		
		while(x > 0) {
			soma = soma + x;
			quantidade++;
			x = sc.nextInt();
		}
		
		if(quantidade == 0) {
			System.out.println("IMPOSSIVEL CALCULAR");
		}
		else {
			media = (double) soma/quantidade;
			System.out.println("MEDIA = " + String.format("%.2f", media));
		}
		
		sc.close();
	}
}