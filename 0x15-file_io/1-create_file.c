#include "main.h"

/**
 * create_file - Function to creates a file
 * @filename: filename pointer
 * @text_content: pointer 
 * Return: 1 for success -1 for NULL
 */
int create_file(const char *filename, char *text_content)
{
	int file_out = 0;
	int  file = 0;
	int  k = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + k) != '\0')
		{
			k++;
		}
		file_out = write(file, text_content, k);
	}
	if (file_out == -1 && file_out != k)
		return (-1);
	return (1);
}
