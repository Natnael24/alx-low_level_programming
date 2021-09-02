#include "main.h"

/**
 * void print_alphabet_x10(void) - prints lower case alphabets 10x.
 * @char s[]: the alphabet
 * Discription: pirnts it line by line
 * It does print the alphabet in lowercase.
 */

void print_alphabet_x10(void)
{
  char s[] = "abcdefghijklmnopqrstuvwxyz";
  int i = 0;
  int j = 0;  
   for (i = 0; s[i] != '\0'; i++)
   {
     _putchar(s[i]);
   }
  _putchar('\n');
}
