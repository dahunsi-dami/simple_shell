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
int _strncmp(char *str1, char *str2, size_t n);
ssize_t _readinput(int term, char **buf, size_t *n);
ssize_t _getline(char **buf, size_t *n, FILE *fd);
void _promptuser(void);
char *_realloc(void *buf, size_t old, size_t new);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
void _executecommand(char **hargv, char *envp[], char *argv[]);
char *_isabspath(char **argv, char *path);
int main(int argc, char *argv[], char *envp[]);
char *_mallocchar(char *_envp, char *_envpc);
char *_appendtopath(char **tokens, char *path, char *argv[]);
char *_checkcmdexists(char **argv, char *envp[]);
char *_findpathenv(char *envp[], char *_envp);

#endif
