package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double distA, distB, distC, distMaior;
		
		System.out.println("Digite as tres distancias:");
		distA = sc.nextDouble();
		distB = sc.nextDouble();
		distC = sc.nextDouble();
		
		if(distA > distB && distA > distC) {
			distMaior = distA;
		}
		else if(distB > distC) {
			distMaior = distB;
		}
		else {
			distMaior = distC;
		}
		

		System.out.println("MAIOR DISTANCIA = " + String.format("%.2f", distMaior));
		sc.close();
	}
}