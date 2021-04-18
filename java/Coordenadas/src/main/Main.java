package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		double x, y;
		String coordenada;
		
		System.out.print("Valor de X: ");
		x = sc.nextDouble();
		System.out.print("Valor de Y: ");
		y = sc.nextDouble();
		
		if(x == 0 && y == 0) {
			coordenada = "Origem";
		}
		else if(x == 0) {
			coordenada = "Eixo Y";
		}
		else if(y == 0) {
			coordenada = "Eixo X";
		}
		else if(x > 0 && y > 0) {
			coordenada = "Q1";
		}
		else if(x < 0 && y > 0) {
			coordenada = "Q2";
		}
		else if(x < 0 && y < 0) {
			coordenada = "Q3";
		}
		else{
			coordenada = "Q4";
		}
		
		System.out.println(coordenada);
		sc.close();
	}
}