Algoritmo "pagamento"

Var

   nome : caractere
   valorPorHora, pagamento : real
   horas : inteiro

Inicio

      escreva("Nome : ")
      leia(nome)
      escreva("Valor por hora : ")
      leia(valorPorHora)
      escreva("Horas trabalhadas : ")
      leia(horas)
      
      pagamento <- valorPorHora * horas;

      escreval("O pagamento para ", nome, " deve ser ", pagamento:8:2)


Fimalgoritmo