#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int, char);
char *str_concat(char *, char *);
int **alloc_grid(int width, int height);
void free_grid(int **, int);
char *argstostr(int, char **);
char **strtow(char *);

#endif
