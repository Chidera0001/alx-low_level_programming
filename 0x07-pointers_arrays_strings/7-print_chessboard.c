#include "main.h"
/**
<<<<<<< HEAD
 * print_chessboard - prints the chessboard
=======
 * print_chessboard - prints the chessboard1~
>>>>>>> 4028a80d5a936ffc411d72b965e836836ea5e960
 * @a: the chessboard
 *
 *
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
