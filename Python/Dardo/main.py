distA: float; distB: float; distC: float; maior: float;

print("Digite as tres distancias: ")
distA = float(input())
distB = float(input())
distC = float(input())

if(distA > distB and distA > distC):
    maior = distA
elif(distB > distC):
    maior = distB
else:
    maior = distC

print(f"MAIOR DISTANCIA = {maior:.2f}")