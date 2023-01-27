#ifndef FACTOR_H
#define FACTOR_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <gmp.h>

void factorize(char *);
char *readln(int fd);
char *parseln(char *);
#endif
