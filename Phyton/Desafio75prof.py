num = (int(input('Digite um número: ')), int(input('Digite um número: ')), int(input('Digite um número: ')), int(input('Digite um número: ')))

print(f'Você digitou os valores {num}')
print(f'O valor 9 apareceu {num.count(9)}')
if 3 in num:
    print(f'O valor 3 apareceu na {num.index(3) + 1} posição')
else:
    print(f'O valor 3 não está em nenhuma posição')
for n in num:
    if n % 2 == 0:
        print(f'{n}')