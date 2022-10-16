#include "main.h"

/**
 * _printf - produce output according to a format
 * @format: input constant
 * Return: size of buffer (when successful) or -1 if unsuccessful
 */

int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		va_list argu;
		unsigned int i;

		char *buf, *temp_str;

		va_start(argu, format);
		buf = _calloc(2048, sizeof(char));

		if (buf == NULL)
			return (-1);

		i = 0;
		while (format && format[i] != 00)
		{
			if (format[0] == 37 && format[1] == 00)
			{
				return (-1);
			}
			i = _strncat(buf, format, i);
			if (format[i] == 37)
			{
				i++;
				temp_str = fntn(format[i], argu);
				_strcat(buf, temp_str);
			}
			if (format[i] != 00)
				i++;
		}
		i = _strlen(buf);
		write(1, buf, i);
		va_end(argu);
		free(buf);
		return (i);
	}
	return (-1);
}
