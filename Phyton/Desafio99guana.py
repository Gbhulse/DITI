from time import sleep

def maior(*núm):
    cont = maior = 0
    print('-=' * 30)
    print('\nAnalisando os valores passados...')
    for valor in núm:
        print(f'{valor} ', end=(''), flush=True)
        sleep(0.3)
        if cont == 0:
            maior = valor
        else:
            if valor > maior:
                maior = valor
        cont += 1
    print(f'Foram informados {cont} valores ao todo.')
    print(f'O maior valor informado foi {maior}.')
    print('-=' * 30)

maior(2, 9, 4, 5, 7, 1)
maior(4, 7, 0)
maior(1, 2)
maior(6)
maior()
maior(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
maior(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20)
        