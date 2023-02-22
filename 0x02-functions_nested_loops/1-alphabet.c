#include "main.h"


	/**
	 * print_alphabet() - print all alphabet in lowercase
	 * returns void
	 */


	void print_alphabet(void)
	{
		/*
		 * print_alphabet - prints all alphabet in lowercase,
		 * the function does not take any arguments, it returns void
		 * */
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}

