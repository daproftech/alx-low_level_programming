#include <stdio.h>
#include <stdlib.h>
/**
 *main - print the number of arguments passedin the command line
 *@argc: number of arguments in the command line
 *@argv: array that contains the program command line
 *Return: 0 - success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
