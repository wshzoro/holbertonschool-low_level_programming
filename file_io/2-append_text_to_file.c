#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, w, len = 0;

if (!filename)
return (-1);

if (text_content)
len = strlen(text_content);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

w = write(fd, text_content, len);
if (w == -1)
return (-1);

close(fd);

return (1);
}
