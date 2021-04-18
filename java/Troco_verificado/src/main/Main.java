package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		
		Scanner sc = new Scanner(System.in);
		double precoUnitario, dinheiro, troco, falta, valorTotal;
		int quantidade;
		
		System.out.print("Pre�o unit�rio do produto: ");
		precoUnitario = sc.nextDouble();
		System.out.print("Quantidade comprada: ");
		quantidade = sc.nextInt();
		System.out.print("Dinheiro recebido: ");
		dinheiro = sc.nextDouble();
		
		valorTotal = precoUnitario * quantidade;
		
		if(dinheiro >= valorTotal) {
			troco = dinheiro - valorTotal;
			System.out.println("TROCO = " + String.format("%.2f", troco));
		}
		else {
			falta = valorTotal - dinheiro;
			System.out.println("DINHEIRO INSUFICIENTE. FALTAM " + String.format("%.2f", falta) +  " REAIS");
		}
		
		
		
		sc.close();
	}
}