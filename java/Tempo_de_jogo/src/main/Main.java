package main;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int horaInicial, horaFinal, duracao;
		
		System.out.print("Hora inicial: ");
		horaInicial = sc.nextInt();
		System.out.print("Hora final: ");
		horaFinal = sc.nextInt();
		
		if(horaFinal > horaInicial) {
			duracao = horaFinal - horaInicial;
		}
		else {
			duracao = 24 - (horaInicial - horaFinal);
		}
		
		System.out.println("O JOGO DUROU " + duracao + " HORA(S)");
		sc.close();
	}
}