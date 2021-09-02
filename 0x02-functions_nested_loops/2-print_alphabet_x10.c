#include "main.h"

/**
 * prints lower case alphabets 10x.
 *
 * Return: Always 0.
 */

void print_alphabet_x10()
{
  const char s[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
  int j = 0;
  for (j = 0; j != 10; j++)
  {
	  for (i = 0; s[i] != '\0'; i++)		
	  {
      _putchar(s[i]);
	  }
    _purtchar('\n');
  }
    return (0);
}
