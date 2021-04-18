precoUnitario: float; dinheiro: float; valorPagar: float; troco: float;
quantidade: int;

precoUnitario = float(input("Preço unitário do produto: "))
quantidade = int(input("Quantidade comprada: "))
dinheiro = float(input("Dinheiro recebido: "))

valorPagar = precoUnitario * quantidade

if(dinheiro >= valorPagar):
    troco = dinheiro - valorPagar
    print(f"TROCO = {troco:.2f}")
else:
    troco = valorPagar - dinheiro
    print(f"DINHEIRO INSUFICIENTE. FALTAM {troco:.2f} REAIS")