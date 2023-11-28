#include "main.h"

/**
 * read_textfile - Write a function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: Path to file
 * @letters: number of letters to be read and printed
 *
 * Return: returns the actual number of letters it could read and print
 *				 if the file can not be opened or read, return 0
 *				 if filename is NULL return 0
 *				 if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
  char *buffer;
  int r_len, w_len, fd;

  if (filename == NULL)
    return (0);

  fd = open(filename, O_RDONLY);

  if (fd < 0)
    return (0);

  buffer = malloc(sizeof(char) * letters);

  if (buffer == NULL)
    return (0);

  r_len = read(fd, buffer, letters);
  close(fd);

  w_len = write(STDOUT_FILENO, buffer, r_len);
}
