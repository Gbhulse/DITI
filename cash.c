#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float reais;
    int centavos;

    do
    {
        reais = get_float("Quantos reais são devidos?");
    } 
    while (reais < 0);
    
    if (reais >= 1)
    {
        int inteiro = (int) reais;
        float decimal = reais - inteiro;
        centavos = (inteiro * 100) + round(decimal*100);

    }

    else
    {
        centavos = round(reais*100);
    }

    printf("Centavos: %d\n", centavos);

     // Denominações disponíveis
    int notas_2 = 0, moedas_50 = 0, moedas_25 = 0, moedas_10 = 0, moedas_5 = 0, moedas_1 = 0;

    // Sistema ganancioso: começar pela maior denominação
    while (centavos > 0)
    {
        if (centavos >= 200)
        {
            notas_2++;
            centavos -= 200;
        }
        else if (centavos >= 50)
        {
            moedas_50++;
            centavos -= 50;
        }
        else if (centavos >= 25)
        {
            moedas_25++;
            centavos -= 25;
        }
        else if (centavos >= 10)
        {
            moedas_10++;
            centavos -= 10;
        }
        else if (centavos >= 5)
        {
            moedas_5++;
            centavos -= 5;
        }
        else if (centavos >= 1)
        {
            moedas_1++;
            centavos -= 1;
        }
    }

    // Exibir o resultado
    printf("Notas de 2 reais: %d\n", notas_2);
    printf("Moedas de 50 centavos: %d\n", moedas_50);
    printf("Moedas de 25 centavos: %d\n", moedas_25);
    printf("Moedas de 10 centavos: %d\n", moedas_10);
    printf("Moedas de 5 centavos: %d\n", moedas_5);
    printf("Moedas de 1 centavo: %d\n", moedas_1);

    return 0;
}