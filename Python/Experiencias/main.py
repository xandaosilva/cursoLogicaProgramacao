n: int; quantidade: int; coelhos: int; ratos: int; sapos: int; total: int;
tipo: str;
pCoelhos: float; pRatos: float; pSapos: float;

n = int(input("Quantos casos de teste serao digitados? "))

coelhos = 0
ratos = 0
sapos = 0
for i in range(1, n+1):
    quantidade = int(input("Quantidade de cobaias: "))
    tipo = str(input("Tipo de cobaia: "))

    if tipo == 'C':
        coelhos = coelhos + quantidade
    elif tipo == 'R':
        ratos = ratos + quantidade
    else:
        sapos = sapos + quantidade

total = coelhos + ratos + sapos

pCoelhos = (coelhos/total) * 100
pRatos = (ratos/total)*100
pSapos = (sapos/total)*100

print()
print("RELATORIO FINAL:")
print(f"Total: {total} cobaias")
print(f"Total de coelhos: {coelhos}")
print(f"Total de ratos: {ratos}")
print(f"Total de sapos: {sapos}")
print(f"Percentual de coelhos: {pCoelhos:.2f}")
print(f"Percentual de ratos: {pRatos:.2f}")
print(f"Percentual de sapos: {pSapos:.2f}")
