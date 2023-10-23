#include <stdio.h>

/**
 * _strlen - function to get string length
 * @s: string
 * Return: length of string
 */

int _strlen(char *s);

int _strlen(char *s)
{
   int i = 0;
   int count = 0;

 for (i = 0 ; s[i] != '\0'; i++)
  {
            ;
    }
    return(i);

   // while (s[i] != '\0')
     //   {
     //       i++;

     //   }
   // return (i);
}

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
