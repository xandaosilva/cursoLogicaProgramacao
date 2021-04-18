n: int;

n = int(input("Quantos numeros voce vai digitar? "))

vet: [int] = [0 for x in range(n)]

for i in range(n):
    vet[i] = int(input("Digite um numero: "))

print("NUMEROS NEGATIVOS:")
for i in range(n):
    if vet[i] < 0:
        print(f"{vet[i]}")