package main;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a, b, c, menor;
		
		System.out.print("Primeiro valor: ");
		a = sc.nextInt();
		System.out.print("Segundo valor: ");
		b = sc.nextInt();
		System.out.print("Terceiro valor: ");
		c = sc.nextInt();
		
		menor = encontrarMenor(a, b, c);
		
		System.out.println("MENOR = " + menor);
		sc.close();
	}

	public static int encontrarMenor(int a, int b, int c) {
		if(a < b && a < c) {
			return a;
		}
		else if(b < c) {
			return b;
		}
		else {
			return c;
		}
	}
}
