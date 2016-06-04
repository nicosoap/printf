/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 03:49:31 by opichou           #+#    #+#             */
/*   Updated: 2016/04/14 17:03:37 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/**nomenclature du printf
 *		%[flags][width][.precision][length]specifier
 *		flags :
 *			- Left-justified within the given field width;
 *			+ Forces to precede the result with a plus or minus sign (+ or -)
 *					even for positive numbers.
 *			(space) f no sign is going to be written, a blank space is inserted
 *					before the value.
 *			#Used with o, x or X specifiers the value is preceded with 0, 0x or 0X
 *				respectively for values different than zero. Used with e, E and f,
 *					it forces th written output to contain a decimal point even if no
 *					digits would follow. By default, if no digits follow, no decimal
 *					point is written. Used with g or G the result is the same as with e
 *					or E but trailling zeros are not removed.
 *			0 Left-pads the number with zeroes (0) instead of spaces, where padding
 *					is specified (see width sub-specifier).
 *		width :
 *			(number)	Minimum number of characters to be printed. If the value to be
 *					printed is shorter than this number, the result is padded with blank
 *					spaces. The value is not truncated even if the result is larger.
 *			*	The width is not specified in the format string, but as an additional
 *					integer value argument preceding the argument that has to be
 *					formatted.
 *
 *		.precision :
 *				.number	For integer specifiers (d, i, o, u, x, X) − precision
 *						specifies the minimum number of digits to be written. If the value
 *						to be written is shorter than this number, the result is padded
 *						with leading zeros. The value is not truncated even if the result
 *						is longer. A precision of 0 means that no character is written for
 *						the value 0. For e, E and f specifiers − this is the number of
 *						digits to be printed after the decimal point. For g and G
 *						specifiers − This is the maximum number of significant digits to
 *						be printed. For s − this is the maximum number of characters to be
 *						printed. By default all characters are printed until the ending
 *						null character is encountered. For c type − it has no effect. When
 *						no precision isspecified, the default is 1. If the period is
 *						specified without an explicit value for precision, 0 is assumed.
 *				.*	The precision is not specified in the format string, but as an
 *						additional integer value argument preceding the argument that has
 *						to be formatted.
 *		length :
 *				h	The argument is interpreted as a short int or unsigned short int
 *						(only applies to integer specifiers: i, d, o, u, x and X).
 *				l	The argument is interpreted as a long int or unsigned long int for
 *						integer specifiers (i, d, o, u, x and X), and as a wide character
 *						or wide character string for specifiers c and s.
 *				L	The argument is interpreted as a long double (only applies to
 *						floating point specifiers: e, E, f, g and G).
 *		specifier :
 *				c	Character
 *				d or i	Signed decimal integer
 *				e	Scientific notation (mantissa/exponent) using e character
 *				E	Scientific notation (mantissa/exponent) using E character
 *				f	Decimal floating point
 *				g	Uses the shorter of %e or %f
 *				G	Uses the shorter of %E or %f
 *				o	Signed octal
 *				s	String of characters
 *				u	Unsigned decimal integer
 *				x	Unsigned hexadecimal integer
 *				X	Unsigned hexadecimal integer (capital letters)
 *				p	Pointer address
 *				n	Nothing printed
 *				%	Character
 * **/

char			*ft_printf_testformat(char *f)
{
	if (*f == 'c' || *f == 'd' || *f == 'X' || *f == 'x' || *f == 'o')
		return("int");
	else if (*f == 'S' || *f == 's')
		return ("str");
	else if (*f == 'p')
		return ("ptr");
	else if (*f == 'E' || *f == 'e' || *f == 'F' || *f == 'G' || *f == 'g')
		return ("double");
	else
		return ("error");
}

char			*ft_printf_test(char **f)
{
	if (*f == '%')
		f++;
	else
		return (NULL);
	while (*f == '-' || *f == '+' || *f == ' ' || *f == '#' || *f == '0')
		f++;
	while (*f == '*' || ft_isdigit(*f))
		f++;
	if (*f == '.')
	while (*f == '*' || ft_isdigit(*f))
		f++;
	if (*f == 'h' || *f == 'l' || *f == 'L')
		f++;
	return (ft_printf_testformat(f));
}

struct s_printf			*ft_printf_parse(t_list	*liste, char *format)
{
			strs.next = ft_lstnew_strs(void)
			if ((strs.flag = ft_isflag(*format)))
				format++;
			if ((strs.width = ft_iswidth(format)))
				while (ft_isdigit(*(++format)))
			if ((strs.precision = ft_isprecision(format)))
					while (ft_isdigit(*(++format)))
			if (!(strs.spec = ft_isspec(*format)))
					ft_printfclearstrs();
}

int				ft_printf(const char * restrict format, ...)
{
	t_list		liste;
	va_list		ap;
	va_start(ap, format);

	while(*format)
	{
		if (*format != '%')
		{
			ft_printf_addstr(liste, ft_strndup(format, ft_strxlen(format, '%')));
			while (*format != '%')
				format++;
		}
		else
		{
			if (ft_strcmp(ft_printf_test((char**)&format), "int") == 0)
				ft_printf_parse(liste, ++format, va_arg(ap, int));
			else if (ft_strcmp(ft_printf_test((char**)&format),"str") == 0)
				ft_printf_parse(liste, ++format, va_arg(ap, char*));
			else if (ft_strcmp(ft_printf_test((char**)&format),"ptr") == 0)
				ft_printf_parse(liste, ++format, va_arg(ap, void*));
			else if (ft_strcmp(ft_printf_test((char**)&format),"double") == 0)
				ft_printf_parse(liste, ++format, va_arg(ap, double));
			else
				return (-1);
		}
	}
	va_end(ap);
}
