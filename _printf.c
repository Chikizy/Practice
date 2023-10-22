#include <stdio.h>
#include <stdarg.h>


/**
 * custom_printf - this function is a custom printf to print characters
 *a) prints a character from a variable list when it encounters the "%c" in the
 * string
 *b) prints nothing if it encounters the % sign just before the null character.
 *c) prints the string as it is when the percent sign(%) is without a
 * specific conversion specifier following it
 *       code:   e.g printf("we love % good ")
 *     output:      we love % good
 * @format: format string to print which may contain the format specifier
 * Return: zero on success
 */
void custom_printf(const char *format, ...);

void custom_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++; /* Move to the character after '%'*/
			if (*format == 'c')
			{
				int ch = va_arg(args, int);

				putchar(ch);

			}
			else if (*format == '%')
			{
				putchar('%');
			}
			else
			{
				putchar('%');
				putchar(*format);
			}
		}
		else
		{
			putchar(*format);
		}
		format++;
	}

	va_end(args);
}

/**
 *main - test for above functio
*Return: 0
 */

int main(void)
{
	custom_printf("we love %% good\n");
	custom_printf("we love %c good\n", 'A');
	custom_printf("we love % good\n");

	return (0);
}
