#include "main.h"
#include <unistd.h>
/**
 * _putchar - print the second half of the string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

int _putchar(char c)
{
 return (write(1, &c, 1));
}
