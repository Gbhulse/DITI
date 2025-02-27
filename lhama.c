#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Solicitar o valor inicial da população ao usuário
    int tamanho_inicial;
    do
    {
        tamanho_inicial = get_int("Tamanho inicial: ");
    }
    while (tamanho_inicial < 9); // Tamanho inicial deve ser pelo menos 9

    // Solicitar o valor final da população ao usuário
    int tamanho_final;
    do
    {
        tamanho_final = get_int("Tamanho final: ");
    }
    while (tamanho_final < tamanho_inicial); // Tamanho final deve ser maior ou igual ao inicial

    // Calcular o número de anos necessários
    int anos = 0;
    int populacao = tamanho_inicial;

    while (populacao < tamanho_final)
    {
        // Calcular os nascimentos e mortes
        int nascimentos = populacao / 3; // Um terço da população nasce
        int mortes = populacao / 4;      // Um quarto da população morre

        // Atualizar o tamanho da população
        populacao = populacao + nascimentos - mortes;

        // Incrementar o contador de anos
        anos++;
    }

    // Exibir o número de anos necessários
    printf("Anos: %i\n", anos);

    return 0;
}
