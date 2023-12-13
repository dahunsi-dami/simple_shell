#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void _write(char *s);
void _prompt_user(void);
ssize_t _readinput(int term, char **buf, size_t *n);
void _exitshell(char *buf);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int main(int ac, char *av[]);

#endif
