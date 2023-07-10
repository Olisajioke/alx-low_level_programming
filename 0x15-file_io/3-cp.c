#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_strn(char *file);
void close_filehandle(int fh);

/**
*make_strn - Allocates 1024 bytes for a string.
*@file: The name of the file the string is associated with.
*Return: A pointer to the newly-allocated string.
*/
char *make_strn(char *file)
{
char *str;

str = malloc(sizeof(char) * 1024);

if (str == NULL)
{
fprintf(stderr, "Error: Unable to write to %s\n", file);
exit(99);
}

return (str);
}

/**
*close_filehandle - Closes file descriptors.
*@fh: The file handle to be closed.
*/
void close_filehandle(int fh)
{
int x;

x = close(fh);

if (x == -1)
{
fprintf(stderr, "Error: Unable to close file handle %d\n", fh);
exit(100);
}
}

/**
*main - Copies the contents of a file to another file.
*@argc: The number of arguments supplied to the program.
*@argv: An array of pointers to the arguments.
*Return: 0 on success.
*Description: If the argument count is incorrect - exit code 97.
*If file_from does not exist or cannot be read - exit code 98.
*If file_to cannot be created or written to - exit code 99.
*If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
int OR, end, RD, WR;
char *str;

if (argc != 3)
{
fprintf(stderr, "Usage: cp file_from file_to\n");
exit(97);
}

str = make_strn(argv[2]);
OR = open(argv[1], O_RDONLY);
RD = read(OR, str, 1024);
end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

while (RD > 0)
{
if (OR == -1 || RD == -1)
{
fprintf(stderr, "Error: Unable to read from file %s\n", argv[1]);
free(str);
exit(98);
}

WR = write(end, str, RD);
if (end == -1 || WR == -1)
{
fprintf(stderr, "Error: Unable to write to %s\n", argv[2]);
free(str);
exit(99);
}

RD = read(OR, str, 1024);
end = open(argv[2], O_WRONLY | O_APPEND);
}

free(str);
close_filehandle(OR);
close_filehandle(end);

return (0);
}
