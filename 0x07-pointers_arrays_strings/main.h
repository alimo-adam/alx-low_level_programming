#ifndef MAIN_H
#define MAIN_H

/* Function Prototypes */

/* Task 0: Replaces the first occurrence of a character */
char *_strpbrk(char *s, char *accept);

/* Task 1: Searches a string for any of a set of bytes */
char *_strspn(char *s, char *accept);

/* Task 2: Locates a character in a string */
char *_strchr(char *s, char c);

/* Task 3: Gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

/* Task 4: Searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);

/* Task 5: Locates a substring */
char *_strstr(char *haystack, char *needle);

/* Task 6: Prints the chessboard */
void print_chessboard(char (*a)[8]);

/* Task 7: Prints the sum of the two diagonals of a square matrix of integers */
void print_diagsums(int *a, int size);

/* Task 8: Sets the value of a pointer to a char */
void set_string(char **s, char *to);

/* Additional function prototypes can be added as required */

#endif /* MAIN_H */
