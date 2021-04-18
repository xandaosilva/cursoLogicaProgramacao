m: int; n: int;

m = int(input("Quantas linhas vai ter cada matriz? "))
n = int(input("Quantas colunas vai ter cada matriz? "))

matA: [int] = [[0 for x in range(n)] for x in range(m)]
matB: [int] = [[0 for x in range(n)] for x in range(m)]
matC: [int] = [[0 for x in range(n)] for x in range(m)]

print("Digite os valores da matriz A:")
for i in range(m):
    for j in range(n):
        matA[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("Digite os valores da matriz B:")
for i in range(m):
    for j in range(n):
        matB[i][j] = int(input(f"Elemento [{i},{j}]: "))

for i in range(m):
    for j in range(n):
        matC[i][j] = matA[i][j] + matB[i][j]

print("MATRIZ SOMA:")
for i in range(m):
    for j in range(n):
        print(f"{matC[i][j]} ", end="")
    print()