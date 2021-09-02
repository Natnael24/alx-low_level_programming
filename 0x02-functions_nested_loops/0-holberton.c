#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const char s[] = "_putchar";
	int i = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{	
	if (s[i] == '\0')
		_putchar('\n');
	else
		_putchar(s[i]);
	}
	return (0);
}
