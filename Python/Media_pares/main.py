n: int; somaPares: int; quantidadePares: int;
mediaPares: float;

n = int(input("Quantos elementos vai ter o vetor? "))

vet: [int] = [0 for x in range(n)]

for i in range(n):
    vet[i] = int(input("Digite um numero: "))

somaPares = 0
quantidadePares = 0

for i in range(n):
    if vet[i] % 2 == 0:
        somaPares = somaPares + vet[i]
        quantidadePares = quantidadePares + 1

if quantidadePares > 0:
    mediaPares = somaPares/quantidadePares
    print(f"MEDIA DOS PARES = {mediaPares:.1f}")
else:
    print("NENHUM NUMERO PAR")