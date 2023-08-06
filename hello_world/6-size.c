#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	prinf("%zu bytes\n", sizeof(char));
	prinf("%zu bytes\n", sizeof(int));
	prinf("%zu byte(s)\n", sizeof(long int));
	prinf("%zu byte(s)\n", sizeof(long long int));
	prinf("%zu byte(s)\n", sizeof(float));
	return (0);
}
