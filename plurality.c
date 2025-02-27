#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Número máximo de candidatos
#define MAX 9

// Candidatos têm nome e contagem de votos
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array de candidatos
candidate candidates[MAX];

// Número de candidatos
int candidate_count;

// Protótipos de funções
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Verifica o número de argumentos
    if (argc < 2)
    {
        printf("Usage: ./plurality [candidate ...]\n");
        return 1;
    }

    // Popula o array de candidatos
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    // Solicita o número de eleitores
    int voter_count = get_int("Number of voters: ");

    // Itera sobre cada eleitor
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Checa se o voto é válido
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Exibe o vencedor
    print_winner();
}

// Atualiza os votos de um candidato
bool vote(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}

// Imprime o(s) vencedor(es) da eleição
void print_winner(void)
{
    int max_votes = 0;

    // Determina o número máximo de votos
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > max_votes)
        {
            max_votes = candidates[i].votes;
        }
    }

    // Imprime os candidatos com o número máximo de votos
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == max_votes)
        {
            printf("%s\n", candidates[i].name);
        }
    }
}
