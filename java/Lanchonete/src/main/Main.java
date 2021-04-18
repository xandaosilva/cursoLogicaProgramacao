package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		int codigo, quantidade;
		double valorPagamento = 0;
		
		System.out.print("Codigo do produto comprado: ");
		codigo = sc.nextInt();
		System.out.print("Quantidade comprada: ");
		quantidade = sc.nextInt();
		
		switch (codigo) {
			case 1: {
				valorPagamento = quantidade * 5.00;
				break;
			}
			case 2:{
				valorPagamento = quantidade * 3.50;
				break;
			}
			case 3:{
				valorPagamento = quantidade * 4.80;
				break;
			}
			case 4:{
				valorPagamento = quantidade * 8.90;
				break;
			}
			case 5:{
				valorPagamento = quantidade * 7.32;
				break;
			}
		}
		
		System.out.println("Valor a pagar: R$" + String.format("%.2f", valorPagamento));
		sc.close();
	}
}