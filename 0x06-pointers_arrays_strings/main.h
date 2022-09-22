/* The prototype file */

#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);

/* 0.  a function that concatenates two strings. */
char *_strcat(char *dest, char *src);

/* 1. a function that concatenates two strings.*/
char *_strncat(char *dest, char *src, int n);

/* 2 a function that copies a string. */
char *_strncpy(char *dest, char *src, int n);

/* 3. a function that compares two strings.*/
int _strcmp(char *s1, char *s2);

/* 4. a function that reverses the content of an array of integers. */
void reverse_array(int *a, int n);

/* 5. a function that changes all lowercase letters of a string to uppercase. */
char *string_toupper(char *);

/* 6. a function that capitalizes all words of a string. */
char *cap_string(char *);

/* 8. a function that encodes a string using rot13. */
char *rot13(char *);

/* 9. a function that prints an integer. */
void print_number(int n);

/* 11. a function that adds two numbers. */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/* 12. a function that prints a buffer. */
void print_buffer(char *b, int size);

#endif
