#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - A function that appends text
 * @filename: The filename to open and append
 * @text_content: The NULL
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fudo, fudw, lens = 0;

	if (filename == NULL)
		return (-1);

	fudo = open(filename, O_RDWR | O_APPEND);
	if (fudo < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fudo);
		return (1);
	}

	while (*(text_content + lens))
		lens++;

	fudw = write(fudo, text_content, lens);
	close(fudo);
	if (fudw < 0)
		return (-1);

	return (1);
}
