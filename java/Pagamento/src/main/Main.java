package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		
		Scanner sc = new Scanner(System.in);
		String nome;
		int horas;
		double valorPorHora, pagamento;
		
		System.out.print("Nome: ");
		nome = sc.nextLine();
		System.out.print("Valor por hora: ");
		valorPorHora = sc.nextDouble();
		System.out.print("Horas trabalhadas: ");
		horas = sc.nextInt();
		
		pagamento = valorPorHora * horas;
		
		System.out.println("O pagamento para " + nome + " deve ser " + String.format("%.2f", pagamento));
		
		sc.close();
	}
}