#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filenamee, size_t letteres);
int create_file(const char *filenamee, char *content);
int append_text_to_file(const char *filenamee, char *content);

#endif
