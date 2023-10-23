#include <stdio.h>

/**
 * _strlen - function to print string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s);

void print_rev(char *s)
{
   int i;
   int n;

   for (i = 0; s[i] != '\0' ; i++)
    {
        ;
    }

     for (n = i - 1 ; n >= 0 ; n--)  /*i is stringlength; n holds index*/
        {
            putchar(s[n]);  /* n is put in as the index */

           /* putchar(s[i-1]);*/
            /* i--; */
		   	/* can be substituted with the line:putchar(s[n]); above since  s[i-1] sets the index to the last index or character before the null character.  this reduces i(string length) to get the corresponding index value e.g for if stringlength(i) is 2, corresponding index will be i-1 which is 2-1=1, for i=1, index is 0. so for string length 2, index runs from 0 to 1. */
            }
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
    print_rev(str);
    return (0);
}
