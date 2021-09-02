#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void){
	const char s[] = "_putchar";
	int i;
	for(i=0; s[i]!='\0'; i++){
	_putchar(s[i]);
	}
	return (0);
}
