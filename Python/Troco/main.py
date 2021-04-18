precoUnitario: float; dinheiro: float; troco: float;
quantidade: int;

precoUnitario = float(input("Preço unitário do produto: "))
quantidade = int(input("Quantidade comprada: "))
dinheiro = float(input("Dinheiro recebido: "))

troco = dinheiro - (precoUnitario * quantidade)

print(f"TROCO = {troco:.2f}")