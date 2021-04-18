Algoritmo "mais_velho"

Var

   N, i, maisVelho, posicao : inteiro
   nomes : vetor[0..9] de caractere
   idades : vetor[0..9] de inteiro

Inicio

      escreva("Quantas pessoas voce vai digitar? ")
      leia(N)
      
      para i de 0 ate N-1 faca
           escreval("Dados da :", i+1 ,"ª pessoa")
           escreva("Nome :")
           leia(nomes[i])
           escreva("Idade :")
           leia(idades[i])
      fimpara
      
      maisVelho <- idades[0]
      posicao <- 0
      
      para i de 1 ate N-1 faca
           se idades[i] > maisVelho entao
              maisVelho <- idades[i]
              posicao <- i
           fimse
      fimpara
      
      escreval("PESSOA MAIS VELHA: ",nomes[posicao])

Fimalgoritmo