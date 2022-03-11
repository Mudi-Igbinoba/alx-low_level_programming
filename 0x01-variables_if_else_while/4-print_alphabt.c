#include <stdio.h>

/**
 *main - entry point
 *Return: 0
 */

int main(void)
{
			char alph;

			for (alph = 'a'; alph <= 'd'; alph++)
			{
				putchar(alph);
			}

			for (alph = 'f'; alph <= 'p'; alph++)
			{
				putchar(alph);
			}

			for (alph = 'r'; alph <= 'z'; alph++)
			{
				putchar(alph);
			}

			putchar('\n');
			return (0);
}
