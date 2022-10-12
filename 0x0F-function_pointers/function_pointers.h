#ifndef FUNC_PTR_H
#define FUNC_PTR_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void print_name(char *, void (f*)(char *));
void array_iterator(int *, size_t, void (*action)(int));
int int_index(int *, int, int (*cmp)(int));

#endif
