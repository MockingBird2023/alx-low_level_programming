#include "main.h"
/**
 * print_alphabet_x10 - funtion that  prints 10x the alphabet, in lowercase,
 *
 * Return: always 0
 */
	void print_alphabet_x10(void)
	{
		char ch;
		int i;

		i = 0;

		while (i < 10)
		{
			ch = 'a';
			while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
			}
			_putchar('\n');
			i++;
		}
	}
