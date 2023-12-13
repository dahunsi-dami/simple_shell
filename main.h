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
void _promptuser(void);
ssize_t _readinput(int term, char **buf, size_t *n);
char **_tokenizeinput(char *buf, const char *delim);
void _exitshell(char *buf);
void _freememory(char *buf, char *bufc, char **hargv, char *path);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(const char *str1, const char *str2, size_t n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_executecommand(char **hargv, char *envp[]);
char *_checkfileexists(char *filename);
char *_extractpathfromenv(char *envp[]);
int _splitstring(char *str, char *delimiter, char ***tokens);
int _splitpath(char *path, char ***directories);
char *_constructfullpath(const char *directory, const char *filename);
char *_findexecutableinpath(char *directories[], const char *filename);
void _cleanupmemory(char *path, char *directories[]);
char *_checkcmdexists(char **argv, char *envp[]);
int main(int argc, char *argv[], char *envp[]);
int _strncmp(const char *str1, const char *str2, size_t n);

#endif
