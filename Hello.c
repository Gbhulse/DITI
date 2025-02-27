#include <cs50.h>
#include <stdio.h>
//gcc -o Hello Hello.c cs50.c
//   ./Hello
int main(void) {
    string answer = get_string("What's your name? ");
    printf("Hello, %s\n", answer);
    return 0;
}