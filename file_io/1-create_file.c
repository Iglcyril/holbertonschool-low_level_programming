#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: content to write in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{

	int fic;
	ssize_t write_resu;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fic = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fic == -1)
		return (-1);

	if (text_content != NULL)
	{
		close(fic);
		return (1);
	}
	while (text_content[len] != '\0')
		len++;

	write_resu = write(fic, text_content, len);
	if (write_resu == -1)
	{
		close(fic);
		return (-1);
	}
	if (close(fic) == -1)
		return (-1);

	return (1);
}
