package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		
		Scanner sc = new Scanner(System.in);
		double salario, aumento, novoSalario;
		int porcentagem;
		
		System.out.print("Digite o salario da pessoa: ");
		salario = sc.nextDouble();
		
		if(salario <= 1000.00) {
			porcentagem = 20;
		}
		else if(salario <= 3000.00) {
			porcentagem = 15;
		}
		else if(salario <= 8000.00) {
			porcentagem = 10;
		}
		else {
			porcentagem = 5;
		}
		
		aumento = ((double) salario * porcentagem)/100;
		novoSalario = salario + aumento;
		
		System.out.println("Novo salario = R$" + String.format("%.2f", novoSalario));
		System.out.println("Aumento = R$" + String.format("%.2f", aumento));
		System.out.println("Porcentagem = " + porcentagem + "%");
		sc.close();
	}
}