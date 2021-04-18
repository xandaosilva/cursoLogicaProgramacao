Algoritmo "comerciante"

Var

    N, i, lucroAbaixo10, lucroEntre10e20, lucroAcima20 : inteiro
    lucro, percentualLucro, totalCompra, totalVenda, lucroTotal : real
    nome : vetor[0..9] de caractere
    precoCompra, precoVenda : vetor[0..9] de real

Inicio

      escreva("Serao digitados dados de quantos produtos? ")
      leia(N)

      para i de 0 ate N-1 faca
           escreval("Produto : ", i+1)
           escreva("Nome : ")
           leia(nome[i])
           escreva("Preco de compra ")
           leia(precoCompra[i])
           escreva("Preco de venda ")
           leia(precoVenda[i])
      fimpara

      lucroAbaixo10 <- 0
      lucroEntre10e20 <- 0
      lucroAcima20 <- 0
      
      para i de 0 ate N-1 faca
           lucro <- precoVenda[i] - precoCompra[i]
           percentualLucro <- lucro * 100 / precoCompra[i]
      
           se percentualLucro < 10 entao
              lucroAbaixo10 <- lucroAbaixo10 + 1
           senao
                se percentualLucro <= 20 entao
                   lucroEntre10e20 <- lucroEntre10e20 + 1
                senao
                   lucroAcima20 <- lucroAcima20 + 1
                fimse
           fimse
      fimpara
      
      totalCompra <- 0
      totalVenda  <- 0
      
      para i de 0 ate N-1 faca
           totalCompra <- totalCompra + precoCompra[i]
           totalVenda  <- totalVenda  + precoVenda[i]
      fimpara

      lucroTotal <- totalVenda - totalCompra
      
      escreval()
      escreval("RELATORIO: ")
      escreval("Lucro abaixo de 10%: ", lucroAbaixo10)
      escreval("Lucro entre 10% e 20%: ", lucroEntre10e20)
      escreval("Lucro acima de 20%: ", lucroAcima20)
      escreval("Valor total de compra: ", totalCompra:4:2)
      escreval("Valor total de venda: ", totalVenda:4:2)
      escreval("Lucro total: ", lucroTotal:4:2)
Fimalgoritmo