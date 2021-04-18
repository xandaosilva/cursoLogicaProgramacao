n: int; x: int;

n = int(input("Quantos numeros voce vai digitar? "))

for i in range(1, n + 1):
    x = int(input("Digite um numero: "))

    if x == 0:
        print("NULO")
    elif x > 0:
        if x % 2 == 0:
            print("PAR POSITIVO")
        else:
            print("IMPAR POSITIVO")
    else:
        if x % 2 == 0:
            print("PAR NEGATIVO")
        else:
            print("IMPAR NEGATIVO")