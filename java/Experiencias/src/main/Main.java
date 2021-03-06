package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, coelhos = 0, ratos = 0, sapos = 0, quantidade = 0,totalCobaias = 0;
		double pCoelhos = 0.00, pRatos = 0.00, pSapos = 0.00;
		char tipo;
		
		System.out.print("Quantos casos de teste serao digitados? ");
		n = sc.nextInt();
		
		for(int i = 0; i < n; i++) {
			System.out.print("Quantidade de cobaias: ");
			quantidade = sc.nextInt();
			System.out.print("Tipo de cobaia: ");
			tipo = sc.next().charAt(0);
			
			if(tipo == 'C') {
				coelhos = coelhos + quantidade;
			}
			else if(tipo == 'R'){
				ratos = ratos + quantidade;
			}
			else {
				sapos = sapos + quantidade;
			}
		}
		
		totalCobaias = coelhos + ratos + sapos;
		pCoelhos = ((double) coelhos/totalCobaias)*100.0;
		pRatos = ((double) ratos/totalCobaias)*100.0;
		pSapos = ((double) sapos/totalCobaias)*100.;
		
		System.out.println();
		System.out.println("RELATORIO FINAL:");
		System.out.println("Total: " + totalCobaias + " cobaias");
		System.out.println("Total de coelhos: " + coelhos);
		System.out.println("Total de ratos: " + ratos);
		System.out.println("Total de sapos: " + sapos);
		System.out.println("Percentual de coelhos: " + String.format("%.2f", + pCoelhos));
		System.out.println("Percentual de ratos: " + String.format("%.2f", pRatos));
		System.out.println("Percentual de sapos:" +  String.format("%.2f", pSapos));
		sc.close();
	}
}