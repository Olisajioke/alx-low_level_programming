#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int z;
unsigned int dec_val = 0;

if (b == NULL)
return (0);

for (z = 0; b[z] != '\0'; z++)
{
if (b[z] != '0' && b[z] != '1')
return (0);
dec_val = (dec_val << 1) + (b[z] - '0');
}

return (dec_val);
}
