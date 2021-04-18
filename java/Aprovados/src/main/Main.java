package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n;
		double media;
		
		System.out.print("Quantos alunos serao digitados? ");
		n = sc.nextInt();
		
		String[] nomes = new String[n];
		double[] notas1 = new double[n], notas2 = new double[n];
		
		for(int i = 0; i < n; i++) {
			System.out.println("Digite nome, primeira e segunda nota do " + (i+1) + "o aluno:");
			sc.nextLine();
			nomes[i] = sc.nextLine();
			notas1[i] = sc.nextDouble();
			notas2[i] = sc.nextDouble();
		}
		
		System.out.println("Alunos aprovados:");
		for(int i = 0; i < n; i++) {
			media = (notas1[i] + notas2[i])/2;
			
			if(media >= 6) {
				System.out.println(nomes[i]);
			}
		}
		
		sc.close();
	}
}