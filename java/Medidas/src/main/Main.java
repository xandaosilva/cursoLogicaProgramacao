package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		
		Scanner sc = new Scanner(System.in);
		double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;
		
		System.out.print("Digite a medida A: ");
		a = sc.nextDouble();
		System.out.print("Digite a medida B: ");
		b = sc.nextDouble();
		System.out.print("Digite a medida C: ");
		c = sc.nextDouble();
		
		areaQuadrado = Math.pow(a, 2);
		areaTriangulo = (a * b)/2;
		areaTrapezio = ((a + b) * c)/2;
		
		System.out.println("AREA DO QUADRADO = " + String.format("%.4f", areaQuadrado));
		System.out.println("AREA DO TRIANGULO = " + String.format("%.4f", areaTriangulo));
		System.out.println("AREA DO TRAPEZIO = " + String.format("%.4f", areaTrapezio));
		
		sc.close();
	}
}