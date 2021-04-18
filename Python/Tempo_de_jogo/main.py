horaInicial: int; horaFinal: int; duracao: int;

horaInicial = int(input("Hora inicial: "))
horaFinal = int(input("Hora final: "))

if(horaFinal > horaInicial):
    duracao = horaFinal - horaInicial
else:
    duracao = 24 - (horaInicial - horaFinal)

print(f"O JOGO DUROU {duracao} HORA(S)")