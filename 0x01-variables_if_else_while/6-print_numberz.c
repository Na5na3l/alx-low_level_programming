#include<stdio.h>
/**
 * main - listing the single base numbers of ten using putchar
 *
 * Return: (0) always success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
