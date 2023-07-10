#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file.
 *
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int FH;
ssize_t WR;
int str = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[str])
str++;
}

FH = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
WR = write(FH, text_content, str);

if (FH == -1 || WR == -1)
return (-1);

close(FH);

return (1);
}
