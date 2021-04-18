codigo: int; quantidade: int;
valorPagar: float;

codigo = int(input("Codigo do produto comprado: "))
quantidade = int(input("Quantidade comprada: "))

if codigo == 1:
    valorPagar = quantidade * 5.00
elif codigo == 2:
    valorPagar = quantidade * 3.50
elif codigo == 3:
    valorPagar = quantidade * 4.80
elif codigo == 4:
    valorPagar = quantidade * 8.90
else:
    valorPagar = quantidade * 7.32

print(f"Valor a pagar: R${valorPagar:.2f}")