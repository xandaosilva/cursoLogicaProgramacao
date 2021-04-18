package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x;
		
		System.out.print("Deseja a tabuada para qual valor? ");
		x = sc.nextInt();
		
		for(int i = 1; i <= 10; i++) {
			System.out.println(x + " X " + i + " = " + x * i);
		}
		
		sc.close();
	}
}