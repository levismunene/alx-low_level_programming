#ifndef MAIN_H
#define MAIN_H

/**
 * read_textfile - This header file contains function
 * declarations for reading text files
 * @filename: filename
 * @letters: letters
 * Return: number of characters read from the text file
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
