n: int; resultado: int;

n = int(input("Deseja a tabuada para qual valor? "))

for i in range(1,11):
    resultado = n * i
    print(f"{n} X {i} = {resultado}")