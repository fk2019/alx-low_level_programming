#ifndef _MAIN_H_
#define _MAIN_H_
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
typedef struct ELF64{
	uint8_t e_ident[16];
	uint16_t e_type;
	uint64_t e_entry;
} ELF64Hdr;
#endif /* _MAIN_H_ */
