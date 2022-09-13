#ifndef MAIN_HEADER
#define MAIN_HEADER

int _putchar(char);
void _puts(char*);
void print_alphabet(void);

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
		_putchar(alpha++);

	_putchar('\n');
}

#endif
