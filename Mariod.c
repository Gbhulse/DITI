#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // Solicitar altura entre 1 e 8
    do
    {
        height = get_int("Altura: ");
    }
    while (height < 1 || height > 8);

    // Gerar as pirâmides
    for (int i = 0; i < height; i++)
    {
        // Imprimir os espaços à esquerda
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Imprimir os hashes da primeira pirâmide
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Imprimir os espaços no meio
        printf("  ");

        // Imprimir os hashes da segunda pirâmide
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Nova linha após cada linha de pirâmide
        printf("\n");
    }

    return 0;
}
