x: float; y: float;
coordenada: str;

x = float(input("Valor de X: "))
y = float(input("Valor de Y: "))

if x == 0 and y == 0:
    coordenada = "Origem"
elif x == 0:
    coordenada = "Eixo Y"
elif y == 0:
    coordenada = "Eixo X"
elif x > 0 and y > 0:
    coordenada = "Q1"
elif x < 0 and y > 0:
    coordenada = "Q2"
elif x < 0 and y < 0:
    coordenada = "Q3"
else:
    coordenada = "Q4"

print(f"{coordenada}")