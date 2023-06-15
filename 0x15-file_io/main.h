#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _class(unsigned char *ch);
void _type(unsigned int e_type, unsigned char *ch);
void _entry(unsigned long int e_entry, unsigned char *ch);
void _close(int elf);
void _abi(unsigned char *ch);
void _os_abi(unsigned char *ch);
void _check(unsigned char *ch);
void _magic(unsigned char *ch);
void _data(unsigned char *ch);
void _version(unsigned char *ch);

#endif
