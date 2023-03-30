#include "main.h"
/**
 * print_triangle - print size triangle
 * Description: task10
 * @size : int
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size - i - 1 <= j)
				_putchar(35);
			else
				_putchar(' ');
		}
		_putchar('\n');
	}

}
