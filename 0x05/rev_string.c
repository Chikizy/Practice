#include <stdio.h>

/**
 * rev_string - function to print string in reverse
 * @s: string
 * Return: void
 */

void rev_string(char *s);

void rev_string(char *s)
{
    int i;
    int count = 0;
    char rev;

    for (i = 0 ; s[i] != '\0' ; i++)  /* get string length */
        count++;
    for (i = 0 ; i < count / 2 ; i++) /* iterate the swap up to the middle of the string. going beyond the middle reverts the string to the original
									position and leaves the string as it was */
    {    rev = s[i];				 /* store the xter at i */
        s[i] = s[count-1-i];		/*swap the xter at s[i] with the xter at corresponding position from behind*/
        s[count-1-i] = rev;			/* swap the xter at  s[count-1-i] wit xter at corresponding ith position from the start*/
    }
}

/**
 * another method:
{
	    int i = 0;
    int len = 0;
    char rev;

    while (s[len])
        len++;
    for (i = 0 ; i < len ; i++)
    {
        len--;
        rev = s[i];
        s[i] = s[len];
        s[len] = rev;
    }
}
*/

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
