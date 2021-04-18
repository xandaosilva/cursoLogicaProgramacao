nome: str
valorPorHora: float; pagamento: float;
horas: int;

nome = str(input("Nome: "))
valorPorHora = float(input("Valor por hora: "))
horas = int(input("Horas trabalhadas: "))

pagamento = horas * valorPorHora

print(f"O pagamento para {nome} deve ser {pagamento:.2f}")