#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

bool only_digits(string s);
char rotate(char c, int k);

int main(int argc, string argv[])
{
    // Verificar se o programa foi executado com exatamente um argumento
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Converter o argumento para um inteiro
    int key = atoi(argv[1]);

    // Solicitar o plaintext ao usuário
    string plaintext = get_string("plaintext: ");

    // Imprimir o ciphertext
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        printf("%c", rotate(plaintext[i], key));
    }
    printf("\n");

    return 0;
}

// Verifica se uma string contém apenas dígitos
bool only_digits(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

// Roda um caractere pelo alfabeto com a chave k
char rotate(char c, int k)
{
    if (isupper(c))
    {
        return 'A' + (c - 'A' + k) % 26;
    }
    else if (islower(c))
    {
        return 'a' + (c - 'a' + k) % 26;
    }
    else
    {
        return c;
    }
}