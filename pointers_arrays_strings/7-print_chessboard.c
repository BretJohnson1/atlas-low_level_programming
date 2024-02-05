#include "main.h"
/**
 *print_chessboard - print chessboard
 *@(a)[8]): checked output
 *
 *Return: always return 0
 */
void print_chessboard(char (*a)[8])
{
	int size = 8;
	char chess[8][8];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if ((i = j) % 2 == 0)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
