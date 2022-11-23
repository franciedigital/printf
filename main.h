#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 *  * struct print - Struct op
 *   *
 *    * @c: the character or format specifier
 *     * @func: function that prints data with the specifier
 */
typedef struct print
{
	/* char *c: formats c, s, b, i, d, o, x, ... */
	char *c;
	/* A function that collects the variable list data and prints with it */
	int (*func)(va_list);
} prn;

int _putchar(char c);
int _printf(const char *format, ...);

/* returns a pointer to the function to execute using structs */
int (*get_func(const char *, int))(va_list);

/* Conversion specifier function prototypes */
int print_bin(va_list);
int print_char(va_list);
int print_number(va_list);
int print_percent(va_list);
int print_str(va_list);
/* b, c, d & i, o, %, s, u, x, X */

#endif
