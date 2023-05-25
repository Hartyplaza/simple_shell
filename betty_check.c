#include "shell.h"

#include <stdio.h>
#include <unistd.h>

/**
 * main - this program prints A-Z in uppercasse
 *
 * Return: always 0
 */

int main(void)
{
	char *i = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int h = 27;
	{
		write(STDOUT_FILENO, i, h);
	}
	return (0);
}
