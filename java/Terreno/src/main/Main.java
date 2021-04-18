package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double largura, comprimento, valorMetro, area, preco;
		
		System.out.print("Digite a largura do terreno: ");
		largura = sc.nextDouble();
		System.out.print("Digite o comprimento do terreno: ");
		comprimento = sc.nextDouble();
		System.out.print("Digite o valor do metro quadrado: ");
		valorMetro = sc.nextDouble();
		
		area = largura * comprimento;
		preco = area * valorMetro;
		
		System.out.println("Area do terreno = : " + String.format("%.2f", area));
		System.out.println("Digite a largura do terreno: " + String.format("%.2f", preco));
		sc.close();
	}
}