#include <stdio.h>

/**
 * _puts - function to print a string
 * @str: string
 * Return: void
 */

void _puts(char *str);

void _puts(char *str)
{
    int i = 0;

    while (str[i])
    {
    putchar(str[i]);
    i++;
    }
   // for (i = 0 ; str[i] != '\0' ; i++)
    //    putchar(str[i]);
}



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
