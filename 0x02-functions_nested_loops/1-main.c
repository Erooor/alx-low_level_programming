#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
int c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
