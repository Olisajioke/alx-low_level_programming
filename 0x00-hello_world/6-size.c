#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by Olisajioke
 * Return: 0
*/
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of short: %lu byte(s)\n", sizeof(short));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long: %lu byte(s)\n", sizeof(long));
	printf("Size of long long: %lu byte(s)\n", sizeof(long long));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	printf("Size of double: %lu byte(s)\n", sizeof(double));
	printf("Size of long double: %lu byte(s)\n", sizeof(long double));
	printf("Size of uintptr_t: %lu byte(s)\n", sizeof(uintptr_t));
	printf("Size of size_t: %lu byte(s)\n", sizeof(size_t));
	printf("Size of void*: %lu byte(s)\n", sizeof(void));
	return (0);
}
