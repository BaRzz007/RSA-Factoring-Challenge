#ifndef FACTOR_H
#define FACTOR_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void factorize(long double);
char *readln(int fd);
long double parseln(char *);
#endif
