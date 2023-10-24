#include <stdio.h>

/**
 * char *_strcpy- Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
 * @src: string to be copied
 * @dest: copy destination
 *  Return: pointer to dest which is a xter array(string literal)
 */

char *_strcpy(char *dest, char *src);

char *_strcpy(char *dest, char *src)
{
    int i;
    int len;

    for (len = 0 ; src[len] != '\0' ; len++)
            ;
    for (i = 0 ; i <= len ; i++)  /* run index from 0 up to i = string length to include the terminating null byte */
    {
        dest[i] = src[i];
    }
        return(dest);  /* pointer to dest */
}

int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
