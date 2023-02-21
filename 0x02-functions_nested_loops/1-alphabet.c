#include "main.h"
#include "stdio.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void);
int _putchar(char);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}

