#include <stdio.h>

/**
 * print_array- prints n elements of an array of integers
 * @a:array
 * @n: number of elements to print
 *  Return: void
 */
void print_array(int *a, int n);

void print_array(int *a, int n)
{
    int i, p = 0;
    
    for (i = 0 ; i < n ; i++) 
    {
        printf("%d",a[i]);
        if (i != n -1)
        {
            printf(", ");
        }
    }
        printf("\n");
    
}

int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
