package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		double celsius, fahrenheit;
		String escala;
		
		System.out.print("Voce vai digitar a temperatura em qual escala (C/F)? ");
		escala = sc.nextLine();
		
		if(escala.equals("F")) {
			System.out.print("Digite a temperatura em Fahrenheit: ");
			fahrenheit = sc.nextDouble();
			celsius = 5.0/9.0  * (fahrenheit - 32.0);
			System.out.println("Temperatura equivalente em Celsius: " + String.format("%.2f", celsius));
		}
		else {
			System.out.print("Digite a temperatura em Celsius: ");
			celsius = sc.nextDouble();
			fahrenheit = celsius * 9.0/5.0 + 32.0;
			System.out.println("Temperatura equivalente em Fahrenheit: " + String.format("%.2f", fahrenheit));
		}
		
		sc.close();
	}
}