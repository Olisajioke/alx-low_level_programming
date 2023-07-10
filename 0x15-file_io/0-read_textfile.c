#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *read_textfile- Read a text file and print its contents to STDOUT.
 *@filename: The name of the text file to be read.
 *@letters: The number of letters to be read.
 *
 *Return: The actual number of bytes read and printed.
 *Returns 0 when the function fails or if filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *ptr;
int FH;
ssize_t WR;
ssize_t RD;

FH = open(filename, O_RDONLY);
if (FH == -1)
return (0);

ptr = malloc(sizeof(char) * letters);
RD = read(FH, ptr, letters);
WR = write(STDOUT_FILENO, ptr, RD);

free(ptr);
close(FH);
return (WR);
}
