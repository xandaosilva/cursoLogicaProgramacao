n: int; homens: int; mulheres: int;
maior: float; menor: float; alturaMulheres: float; mediaAlturaMulheres: float;

n = int(input("Quantas pessoas serao digitadas? "))

alturas: [float] = [0 for x in range(n)]
generos: [str] = [0 for x in range(n)]

for i in range(n):
    alturas[i] = float(input(f"Altura da {i + 1}a pessoa: "))
    generos[i] = str(input(f"Genero da {i + 1}a pessoa: "))

maior = alturas[0]
menor = alturas[0]
for i in range(n):
    if alturas[i] > maior:
        maior = alturas[i]
    if alturas[i] < menor:
        menor = alturas[i]

homens = 0
mulheres = 0
alturaMulheres = 0
for i in range(n):
    if generos[i] == "F":
        alturaMulheres = alturaMulheres + alturas[i]
        mulheres = mulheres + 1
    else:
        homens = homens + 1

mediaAlturaMulheres = alturaMulheres/mulheres

print(f"Menor altura = {menor:.2f}")
print(f"Maior altura = {maior:.2f}")
print(f"Media das alturas das mulheres = {mediaAlturaMulheres:.2f}")
print(f"Numero de homens = {homens}")