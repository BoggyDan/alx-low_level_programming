#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

/* prototype of function _putchar */
int _putchar(char c);

/* prototype of function malloc_checked */
void *malloc_checked(unsigned int b);

/* prototye of function string_nconcat */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* prototype of function _calloc */
void *_calloc(unsigned int nmemb, unsigned int size);

/* prototype of function array_range */
int *array_range(int min, int max);

/* prototype of function _realloc */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* MAIN_H */