package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, abaixo16;
		double somaAlturas, mediaAltura, porcentagemAbaixo16;
		
		System.out.print("Quantas pessoas serao digitadas? ");
		n = sc.nextInt();
		
		String[] nomes = new String[n];
		int[] idades = new int[n];
		double[] alturas = new double[n];
		
		for(int i = 0; i < n; i++) {
			System.out.println("Dados da " + (i+1) + "? pessoa :");
			System.out.print("Nome: ");
			nomes[i] = sc.next();
			System.out.print("Idade: ");
			idades[i] = sc.nextInt();
			System.out.print("Altura: ");
			alturas[i] = sc.nextDouble();
		}
		
		somaAlturas = 0;
		for(int i = 0; i < n; i++) {
			somaAlturas = somaAlturas + alturas[i];
		}
		
		abaixo16 = 0;
		for(int i = 0; i < n; i++) {
			if(idades[i] < 16) {
				abaixo16++;
			}
		}
		
		mediaAltura = somaAlturas/n;
		porcentagemAbaixo16 = ((double) abaixo16/n)*100.0;
		
		System.out.println();
		System.out.println("Altura m?dia: " + String.format("%.2f", mediaAltura));
		System.out.println("Pessoas com menos de 16 anos: " + porcentagemAbaixo16 + "%");
		for(int i = 0; i < n; i++) {
			if(idades[i] < 16) {
				System.out.println(nomes[i]);
			}
		}
		
		sc.close();
	}
}