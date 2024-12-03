# C- Simple Shell
**`An ALX Africa Software Engineering Program project.`**<br><br>

## Project Overview

This is a collaborative project to build a custom `bash` shell in C, to simulate basic shell functionality!

It allows users to execute commands, manage paths, handle user input, and perform memory management operations.

The goal is to deepen understanding of C programming and explore the intricacies of shell development.

## Project Contributors

- **Meet the amazing individuals contributing to this project:**
  - [@dahunsi-dami](https://github.com/dahunsi-dami)
  - [@mikoiyke](https://github.com/mikoiyke)

## Technologies Used

- **This project leverages the following technologies:**
  - Programming Language: `C`
  - Operating System: `Ubuntu 20.04`

## Functions Overview

We built several functions from scratch, each prefixed with an underscore `_`, to handle different aspects of the custom `simple_shell` functionality.

Here is a table summarizing the key functions used in this project.

*Functions we built from scratch start with the underscore `_` character.*

| Function Name 		| Description 													|
| ----------------------|---------------------------------------------------------------|
| `_write`   | Writes a given string to the standard output (stdout).   |
| `_tokenizeinput`   | Tokenizes an input string based on a specified delimiter, allocates memory for the tokens, and returns an array of tokenized strings.   |
| `_checkgetfail`   | Checks if `getline` function fails, handles the error by freeing the buffer and exiting the program, and checks if the input is the "exit" command to terminate the program.   |
| `_putchar`   | Writes a given character to the standard output (stdout) and returns `1` on success or `-1` if an error occurs.   |
| `_strcmp`   | Compares 2 strings character and returns the difference between the first non-matching characers or `0` if the strings are identical.   |
| `_strlen`   | Calculates and returns the length of a string by counting the number of characters before the null terminator.   |
| `_strncmp`   | Compares the first `n` characters of 2 strings and returns the difference between the 1st mismatched characters, or `0` if the strings are identical within the first `n` characters.   |
| `_readinput`   | Reads input from the user, optionally prompts the user if the input is from the terminal, and returns the number of characters read into the provided buffer.   |
| `_getline`   | Dynamically allocates memory for a string, reads input from a specified file stream, adjust the buffer size as needed, and returns the number of character read (excluding the newline character).   |
| `_promptuser`   | Prompts the user with the shell input symbol `hsh >` by calling the `_write` function.   |
| `_realloc`   | Reallocates memory for a buffer, adjusting its size based on the provided new size, and returns a pointer to the newly allocated buffer (copying the old content if the size increases).   |
| `_strcpy`   | Copies the string pointed to by `src` into the buffer pointed to by `dest`, and then returns a pointer to `dest`.   |
| `_strcat`   | Concatenates the string pointed to by `src` to the end of the string pointed to by `dest`, and then returns a pointer to `dest`.   |
| `_executecommand`   | Executes a command by forking a new process, checks if the command exists using `_checkcmdexists`, and then runs the command using `execve`. It waits for the command to finish and fress the allocated memory for the command path.   |
| `_isabspath`   | Checks if the given path (the 1st argument in `argv`) is absolute using the `stat` function. If the path exists, it allocates memory for it, copies the path into the allocated memory, and returns it; otherwise, it returns `NULL`.   |
| `_mallocchar`   | Allocates memory for a copy of the string `_envp` and returns a pointer to the allocated memory, or `NULL` if allocation fails, after freeing `_envp` and printing an error message.   |
| `_appendtopath`   | Attempts to find a valid directory for a relative path by appending the command to each token in the parsed array and checking if the resulting path exists.   |
| `_checkcmdexists`   | Checks if a command exists as an executable either by verifying its absolute path or searching the directories listed in the `PATH` environment variable.   |
| `_findpathenv`   | Searches the environment variables for the `PATH` value, allocates memory for it, and returns the path or `NULL` if not found.   |

## Compilation

The shell is compiled this way:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

## Testing

It works like this in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

But also in non-interactive mode like this:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

## Requirements

- The code uses the `Betty` style. It's checked using `betty-style.pl` and `betty-doc.pl`.
- No more than 5 functions per file.
- All header files are include guarded.
- System calls are used only when we need to.
- There, ideally, should be no memory leaks.
