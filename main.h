#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

void _write(char *s);
char **_tokenizeinput(char *buf, char *bufc, const char *delim);
void _checkgetfail(ssize_t nchar, char *buf, char *argv[], FILE *stream);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(const char *str1, const char *str2, size_t n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
void _executecommand(char **hargv, char *envp[], char *argv[]);
int main(int argc, char *argv[], char *envp[]);
int _strncmp(const char *str1, const char *str2, size_t n);

#endif
