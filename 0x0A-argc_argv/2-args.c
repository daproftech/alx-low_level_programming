#include <stdio.h>
/**
 *main - that prints all arguments it receive
 *@argc: number of arguments in the command line
 *@argv: array that conntains the program command
 *Return: 0 - success
 */
int main(int argc, char *argv [])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
