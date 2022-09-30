#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/* prototype of functin _putchar */
int _putchar(char c);

/* prototype of function _islower */
int _islower(int c);

/* protoype of function _isalpha */
int _isalpha(int c);

/* prototype of function _abs */
int _abs(int n);

/* prototype of function _isupper */
int _isupper(int c);

/*prototype of function _isdigit */
int _isdigit(int c);

/* prototype of function _strlen */
int _strlen(char *s);

/* prototype of function _puts */
void _puts(char *s);

/* prototype of function _strcpy */
char *_strcpy(char *dest, char *src);

/* prototype of function _atoi */
int _atoi(char *s);

/* prototype of function _strcat */
char *_strcat(char *dest, char *src);

/* prototype of function _strncat */
char *_strncat(char *dest, char *src, int n);

/* prototype of function _strncpy */
char *_strncpy(char *dest, char *src, int n);

/* prototype of function _strcmp */
int _strcmp(char *s1, char *s2);

/* prototype of function _memset */
char *_memset(char *s, char b, unsigned int n);

/* prototype of function _memcpy */
char *_memcpy(char *dest, char *src, unsigned int n);

/* prototype of functin _strchr */
char *_strchr(char *s, char c);

/* prototype of function _strspn */
unsigned int _strspn(char *s, char *accept);

/* prototype of function _strpbrk */
char *_strpbrk(char *s, char *accept);

/* protype of function _strstr */
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */