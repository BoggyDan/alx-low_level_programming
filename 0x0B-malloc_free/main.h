#ifndef MAIN_H
#define MAIN_H

/* prototype of function _putchar */
int _putchar(char c);

/* prorotype of function create_array */
char *create_array(unsigned int size, char c);

/* prototype of function _strdup */
char *_strdup(char *str);

/* prototype of function str_concat */
char *str_concat(char *s1, char *s2);

/* prototype of function alloc_grid */
int **alloc_grid(int width, int height);

/* prototype of function free_grid */
void free_grid(int **grid, int height);

/* prototype of function argstostr */
char *argstostr(int ac, char **av);

/* prototype of function strtow */
char **strtow(char *str);

#endif /* MAIN_H */

