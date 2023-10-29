#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - print the results
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int a;
int b;
int product;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
product = a * b;
printf("%d\n", product);
return (0);
}
