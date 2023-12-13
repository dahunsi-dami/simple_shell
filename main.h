#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void _write(char *s);
void _prompt_user(void);
ssize_t _readinput(int term, char **buf, size_t *n);
void _exitshell(char *buf);
void _freememory(char *buf, char *bufc, char **hargv, char *path);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_executecommand(char **hargv, char *envp[]);
char *_checkcommandindirectory(const char *directory, const char *command);
char *searchcommandinpath(const char *command, const char *path);
int main(int ac, char *av[]);

#endif
