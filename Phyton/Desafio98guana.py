from time import sleep

def contador(i, f, p):
    print(f'Contagem de {i} até {f} de {p} em {p}')

    if p < 0:
        p *= -1
    if p == 0:
        p = 1
        print('Passo 0 é inválido. Vamos ajustar para 1 automaticamente.')
    if i < f:
        cont = i
        while cont <= f:
            print(f'{cont} -> ', end=(''), flush=True)
            sleep(0.3)
            cont += p
        print('FIM')
    else:
        cont = i
        while cont >= f:
            print(f'{cont} -> ', end=(''), flush=True)
            sleep(0.34)
            cont -= p
        print('FIM')
    print('Acabou o programa!')

contador(1, 10, 1)
contador(10, 0, 2)
print('Agora é sua vez de personalizar a contagem! ')
a = int(input('Início: '))
b = int(input('Fim: '))
c = int(input('Passo: '))
contador(a, b, c)
