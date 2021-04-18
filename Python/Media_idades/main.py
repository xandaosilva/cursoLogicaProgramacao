x: int; soma: int; quantidade: int;
media: float;

print("Digite as idades:")
x = int(input())

soma = 0;
quantidade = 0;

while x > 0:
    soma = soma + x
    quantidade = quantidade + 1
    x = int(input())

if quantidade == 0:
    print("IMPOSSIVEL CALCULAR")
else:
    media = soma/quantidade
    print(f"MEDIA = {media:.2f}")
