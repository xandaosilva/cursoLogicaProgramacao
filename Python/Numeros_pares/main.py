n: int; quantidadePares: int;

n = int(input("Quantos numeros voce vai digitar? "))

vet: [int] = [0 for x in range(n)]

for i in range(n):
    vet[i] = int(input("Digite um numero: "))

quantidadePares = 0

print("\nNUMEROS PARES:")
for i in range(n):
    if vet[i] % 2 == 0:
        print(f"{vet[i]} ",end="")
        quantidadePares = quantidadePares + 1;

print(f"\n\nQUANTIDADE DE PARES = {quantidadePares}")