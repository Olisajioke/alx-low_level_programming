#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*variable_count - check if the string contains only integers
*@str: array of characters
*Return: 1 if the string contains only integers, 0 otherwise
*/

int variable_count(char str)
{
/*Declaring variables */
unsigned int num;

for (num = 0; num < strlen(str); num++) /* count string */
{
if (!isdigit(str[num])) /*check if str contains digit*/
{
return (0);
}
}
return (1);
}

/**
*main - Print the name of the program
*@argc: Count of arguments
*@argv: Argument vector
*Return: Always 0 (Success)
*/

int main(int argc, char argv[])
{
/* Declaring variables */
int integer;
int change_to_int;
int sum = 0;

integer = 1;
while (integer < argc) /* Goes through the whole array*/
{
if (variable_count(argv[integer]))
{
change_to_int = atoi(argv[integer]);
sum += change_to_int;
}
else /*Condition if one of the numbers contains symbols that are not digits */
{
puts("Error");
return (1);
}
integer++;
}

printf("%d\n", sum); /* Print sum */

return (0);
}
integer++;
}
printf("%d\n", sum); /* Print sum */
return (0);
}
