#include <stdio.h>

void decToOct(int n)
{
    int oct = 0;
    int place = 1;

    while (n > 0)
    {
        oct = oct + (n % 8) * place;
        n = n / 8;
        place = place * 10;
    }

    printf("Octal = %d", oct);
}

int main()
{
    decToOct(65);
    return 0;
}