package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		
		Scanner sc = new Scanner(System.in);
		double precoUnitario, dinheiro, troco;
		int quantidade;
		
		System.out.print("Preço unitário do produto: ");
		precoUnitario = sc.nextDouble();
		System.out.print("Quantidade comprada: ");
		quantidade = sc.nextInt();
		System.out.print("Dinheiro recebido: ");
		dinheiro = sc.nextDouble();
		
		troco = dinheiro - (precoUnitario * quantidade);
		
		System.out.println("TROCO = " + String.format("%.2f", troco));
		
		sc.close();
	}
}