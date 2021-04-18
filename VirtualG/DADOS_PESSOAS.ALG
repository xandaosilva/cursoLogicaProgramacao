Algoritmo "dados_pessoas"

Var

    N, i, homens, mulheres : inteiro
    altura : vetor[0..99] de real
    genero : vetor[0..99] de caractere
    maior, menor, somaAltura, media : real

Inicio

      escreva("Quantas pessoas serao digitadas? ")
      leia(N)
      
      para i de 0 ate N-1 faca
           escreva("Altura da " , i + 1 , "ª pessoa: ")
           leia(altura[i])
           escreva("Genero da " , i + 1 , "ª pessoa: ")
           leia(genero[i])
      fimpara

      maior <- altura[0]
      menor <- altura[0]

      para i de 1 ate N-1 faca
           se altura[i] > maior entao
              maior <- altura[i]
           fimse
           
           se altura[i] < menor entao
              menor <- altura[i]
           fimse
      fimpara

      homens <- 0
      mulheres <- 0
      somaAltura <- 0
      
      para i de 0 ate N-1 faca
           se genero[i] = "F" entao
                somaAltura <- somaAltura + altura[i]
                mulheres <- mulheres + 1
           senao
                homens <- homens + 1
           fimse
      fimpara

      se mulheres = 0 entao
           escreval("Impossivel calcular a altura media das mulheres .")
      senao
           media <- somaAltura/mulheres
      fimse
      
      escreval("Menor altura = ",menor:3:2)
      escreval("Maior altura = ",maior:3:2)
      escreval("Media das alturas das mulheres = ",media:3:2)
      escreval("Media das alturas das mulheres = ",homens)
Fimalgoritmo