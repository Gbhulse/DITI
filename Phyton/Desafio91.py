from random import randint
from time import sleep
from operator import itemgetter

jogo = { 'jogador1': randint(1, 6),
         'jogador2': randint(1, 6),
         'jogador3': randint(1, 6),
         'jogador4': randint(1, 6)}

ranking = list()

print(jogo)
print('-=' * 30)
for k, v in jogo.items():
    print(f'O {k} tirou {v} no dado.')
    sleep(1)
print('-=' * 30)

ranking = sorted(jogo.items(), key=itemgetter(1), reverse=True)

print('Ranking dos jogadores:') 
print('-=' * 30)    
for i, v in enumerate(ranking):
    print(f'{i + 1}º lugar: {v[0]} com {v[1]}')
    sleep(1)