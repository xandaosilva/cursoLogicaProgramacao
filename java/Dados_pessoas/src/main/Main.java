package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, quantidadeHomens, quantidadeMulheres;
		double maior, menor, alturaMediaMulheres, alturaTotalMulheres;
		
		System.out.print("Quantas pessoas serao digitadas? ");
		n = sc.nextInt();
		
		double[] alturas = new double[n];
		char[] genero = new char[n];
		
		for(int i = 0; i < n; i++) {
			System.out.print("Altura da " + (i+1) + "� pessoa: ");
			alturas[i] = sc.nextDouble();
			System.out.print("Genero da " + (i+1) + "� pessoa: ");
			genero[i] = sc.next().charAt(0);
		}
		
		maior = alturas[0];
		menor = alturas[0];
		for(int i = 1; i < n; i++) {
			if(alturas[i] > maior) {
				maior = alturas[i];
			}
			
			if(alturas[i] < menor) {
				menor = alturas[i];
			}
		}
		
		quantidadeHomens = 0;
		quantidadeMulheres = 0;
		alturaTotalMulheres = 0;
		for(int i = 0; i < n; i++){
			if(genero[i] == 'F') {
				alturaTotalMulheres = alturaTotalMulheres + alturas[i];
				quantidadeMulheres++;
			}
			else {
				quantidadeHomens++;
			}
		}
		
		alturaMediaMulheres = alturaTotalMulheres/quantidadeMulheres;
		
		System.out.println("Menor altura = " + String.format("%.2f", menor));
		System.out.println("Maior altura = " + String.format("%.2f", maior));
		System.out.println("Media das alturas das mulheres = " + String.format("%.2f", alturaMediaMulheres));
		System.out.println("Numero de homens = " + quantidadeHomens);
		
		sc.close();
	}
}