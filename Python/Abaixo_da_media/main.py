n: int;
soma: float; media: float;

n = int(input("Quantos elementos vai ter o vetor? "))

vet: [float] = [0 for x in range(n)]

for i in range(n):
    vet[i] = float(input("Digite um numero: "))

soma = 0
for i in range(n):
    soma = soma + vet[i]

media = soma/n

print(f"\nMEDIA DO VETOR = {media:.3f}")
print("ELEMENTOS ABAIXO DA MEDIA:")
for i in range(n):
    if vet[i] < media:
        print(f"{vet[i]}")