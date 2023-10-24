#include <stdio.h>

/**
*puts2- prints half of a string
*Return: void
*/
void puts2(char *str);

void puts2(char *str)
{
    int i, n;

    for (i = 0 ; str[i] != '\0' ; i++)
            ;
    for (n = i / 2 ; str[n] != '\0' ; n++)
        putchar(str[n]);
        putchar('\n');
}

int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
