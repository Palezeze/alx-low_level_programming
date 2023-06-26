#include <unistd.h>

/**
 * _putchar - writes character c 
 * @c: char to br printed 
 * Return: 1 (if successful)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
