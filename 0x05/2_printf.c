#include <stdio.h>
#include <stdarg.h>

int custom_printf(const char *format, ...);

/** Modify custom_printf to return the number of characters printed*/
int custom_printf(const char *format, ...)
{
	va_list args;			/* Declare a va_list to handle variable arguments*/
	int printed_chars = 0;  /* Initialize a counter for printed characters*/

	va_start(args, format); /* Initialize the va_list with the format*/

	while (*format)		  /* Loop through the characters in the format string*/
	{
		if (*format == '%') 	/* If the character is '%' */
		{
			format++;			/* Move to the character after '%' */
			if (*format == 'c')	  /* If the next character is 'c' */
			{
				int ch = va_arg(args, int);  /*Extract a xter 4rm d va_list */

				putchar(ch);				 /* Print the character */
				printed_chars++;	/* Increment the character count */
			}
			else if (*format == '%')   /* If the next character is also '%' */
			{
				putchar('%');	 /* Print a single '%' character */
				printed_chars++;		/* Increment the character count */
			}
			else		/* If the next character is not 'c' or '%' */
			{
				putchar('%');		/* Print '%' */
				putchar(*format);	/* Print the following character */
				printed_chars += 2;	/* Increment the character count by 2 */
			}
		}
		else	/* If the character is not '%' */
		{
			putchar(*format);  /* Print the character */
			printed_chars++;  /* Increment the character count */
		}
		format++;  /* Move to the next character in the format string */
		}

	va_end(args);  /* Clean up the va_list */

	return (printed_chars - 1);  /* Return the total number of characters printed */
}

int main(void)
{
	int total_printed;

	/* Call custom_printf and print the total characters printed */
	total_printed = custom_printf("we love %% good\n");
	printf("\nTotal characters printed: %d\n", total_printed);

	total_printed = custom_printf("we love %c good\n", 'A');
	printf("\nTotal characters printed: %d\n", total_printed);

	total_printed = custom_printf("we love %\n");
	printf("\nTotal characters printed: %d\n", total_printed);

	return (0);
}
