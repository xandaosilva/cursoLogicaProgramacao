package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		
		Scanner sc = new Scanner(System.in);
		int minutos;
		double valorPagar;
		
		System.out.print("Digite a quantidade de minutos: ");
		minutos = sc.nextInt();
		
		if(minutos <= 100)
			valorPagar = 50.00;
		else
			valorPagar = 50.00 + ((minutos - 100.00) * 2);
		
		System.out.println("Valor a pagar: R$" + String.format("%.2f", valorPagar));
		sc.close();
	}
}