#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Return: Exit status is zero means success
 */

/**
 *  main - Prints a-z to standard output
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');
	return (0);

}
