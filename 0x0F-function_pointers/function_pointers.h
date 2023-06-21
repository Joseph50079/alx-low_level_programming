#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS


#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));




#endif
