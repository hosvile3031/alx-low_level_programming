#include <stdio.h>
/**
 * main - print alpha in caps and low case
 *
 * Return: (0)
 *
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';
	char Lower = 'a';
	char Upper = 'A';

	while (lower <= 'z')
	while (Lower <= 'z')
	{
		putchar(lower);
		lower++;
		putchar(Lower);
		Lower++;
	}
	while (upper <= 'Z')
	while (Upper <= 'Z')
	{
		putchar(upper);
		upper++;
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return (0);
}
