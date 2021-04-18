valorPagar: float;
minutos: int;

minutos = int(input("Digite a quantidade de minutos: "))

if(minutos <= 100):
    valorPagar = 50;
else:
    valorPagar = 50 + ((minutos - 100) * 2)

print(f"Valor a pagar: R${valorPagar:.2f}")