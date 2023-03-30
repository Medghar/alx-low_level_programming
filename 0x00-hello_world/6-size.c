#include <stdio.h>

/**
 *main - main fonction
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("Size of float: %lu byte(s)", sizeof(float));
	printf("Size of char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of long int: %lu byte(s)", sizeof(long int));
	printf("Size of long long int: %lu byte(s)", sizeof(long long int));
	return (0);
}
