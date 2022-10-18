#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <unistd.h>
#include <stdarg.h>

/*_putchar*/
int _putchar(char c);

/*print_functs.c*/
int print_int(va_list arg);
int print_unsigned(va_list arg);

/*_printf.c*/
int _printf(const char *format, ...);

/*print_functs.c*/
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(void);

/*Binary.c*/
void print_binary(unsigned int n, unsigned int *printed);

/*unsigned_to_binary.c*/
int print_unsignedToBinary(va_list arg);
int print_oct(va_list arg);
int print_unsignedIntToHex(unsigned int num, char _case);

/*hexadecimals.c*/
int print_hex_base(va_list arg, char _case);
int print_hex(va_list arg);
int print_HEX(va_list arg);

/*print_functs.c*/
int print_STR(va_list arg);

/**
 * struct identifierStruct - structure definition
 * @indentifier: type
 * @printer: function to print
 */

typedef struct identifierStruct
{
char *indentifier;
int (*printer)(va_list);
} identifierStruct;

#endif /* _PRINTF_H_ */
