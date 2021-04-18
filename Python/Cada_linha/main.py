n: int; maior: int;

n = int(input("Qual a ordem da matriz? "))

mat: [int] = [[0 for x in range(n)] for X in range(n)]
vetMaiorLinha: [int] = [0 for x in range(n)]

for i in range(n):
    for j in range(n):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

for i in range(n):
    maior = mat[i][0]
    for j in range(n):
        if mat[i][j] > maior:
            maior = mat[i][j]
    vetMaiorLinha[i] = maior

print("MAIOR ELEMENTO DE CADA LINHA:")
for i in range(n):
    print(f"{vetMaiorLinha[i]}")