#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/* prototype of functin _putchar */
int _putchar(char c);

/* prototype of function _strcat */
char *_strcat(char *dest, char *src);

/* prototype of function _strncat */
char *_strncat(char *dest, char *src, int n);

/* prototype of function _strncpy */
char *_strncpy(char *dest, char *src, int n);

/* prototype of function _strcmp */
int _strcmp(char *s1, char *s2);

/* prototype of function reverse_array */
void reverse_array(int *a, int n);

/* prototype of function string_toupper */
char *string_toupper(char *s);

/* prototype of function cap_string */
char *cap_string(char *);

/* prototype of function leet */
char *leet(char *);

/* prototype of function rot13 */
char *rot13(char *);

/* prototype of function print_number */
void print_number (int n);

/* ptototype of function infinte_add */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/* prototype of function print_buffer */
void print_buffer(char *b, int size);

#endif /* MAIN_H */