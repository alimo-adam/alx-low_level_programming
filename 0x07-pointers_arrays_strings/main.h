#ifndef MAIN_H
#define MAIN_H

/* Function that locates a character in a string */
char *_strchr(char *s, char c);

/* Function that gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

/* Function that searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);

/* Function that locates a substring */
char *_strstr(char *haystack, char *needle);

/* Function that prints the chessboard */
void print_chessboard(char (*a)[8]);

/* Function that prints the sum of the two diagonals of a square matrix of integers */
void print_diagsums(int *a, int size);

/* Function to print character */
int _putchar(char c);

char *_strchr(char *s, char c);

#endif /* MAIN_H */
