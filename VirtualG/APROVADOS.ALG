Algoritmo "aprovados"


Var

   N, i : inteiro
   nomes : vetor[0..9] de caractere
   notaA, notaB, media : vetor[0..9] de real

Inicio

      escreva("Quantos alunos serao digitados? ")
      leia(N)

      para i de 0 ate N-1 faca
           escreval("Digite nome, primeira e segunda nota do ", i+1 , "º aluno: ")
           leia(nomes[i])
           leia(notaA[i])
           leia(notaB[i])
      fimpara

      escreval("Alunos aprovados: :")
      para i de 0 ate N-1 faca
           media[i] <- (notaA[i] + notaB[i])/2
           se media[i] >= 6.0 entao
              escreval(nomes[i])
           fimse
      fimpara
Fimalgoritmo