#ifndef MAIN_H
#define MAIN_H

/**
 * main.h - main file for 0x15
 * File: ALXSE
 * Auth: Levis Munene
 * Desc: Header type containing description for all functions
 * written in the 0x15-file_io directory.
 * @filename: filename
 * @letters: letters
 * Return: dependent on function
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
