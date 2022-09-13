#include "main.h"

/**
 * jack_bauer - prints all the minutes and hours of the day
 */
void jack_bauer(void)
{
	char h1;
	char h2;
	char h3;
	char h4;

	for (h1 = '0'; h1 < '3'; ++h1)
	{
		for (h2 = '0'; h2 <= '9'; ++h2)
		{
			if (h1 == '2' && h3 > '4')
				break;

			for (h3 = '0'; h3 < '6'; ++h3)
			{
				for (h4 = '0'; h4 <= '9'; ++h4)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(h3);
					_putchar(h4);
					_putchar('\n');
				}
			}
		}
	}
}
