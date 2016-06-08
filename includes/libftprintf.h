/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 23:01:13 by opichou           #+#    #+#             */
/*   Updated: 2016/06/08 14:24:09 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <locale.h>
# include <wchar.h>

typedef struct		s_list
{

	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_printf
{
	char			*flag;
	int				width;
	int				precision;
	char			length;
	char			spec;
	int				data_int;
	char			*data_str;
	double			data_double;
}					t_printf;

int					ft_printf(const char *restrict format, ...);

void				ft_putdouble(long double num, char c, size_t p);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr_hex(unsigned int n);
void				ft_putnbr_hexmaj(unsigned int n);

void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putwchar(wchar_t wc);

char				*ft_precision(char *format, va_list ap);
char				*ft_length(char *format, va_list ap);
char				*ft_spec(char *format, va_list ap);
char				*ft_spec_l(char *format, va_list ap);
char				*ft_spec_ll(char *format, va_list ap);
char				*ft_spec_h(char *format, va_list ap);
char				*ft_spec_hh(char *format, va_list ap);
char				*ft_spec_j(char *format, va_list ap);
char				*ft_spec_z(char *format, va_list ap);

short				ft_cast_short(int i);
unsigned short		ft_cast_ushort(int i);

char				*(*ft_put[177])(va_list ap);

int					ft_return_free(char **str);
char				*ft_ret_pct(va_list ap);
char				*ft_ret_null(va_list ap);
char				*ft_ret_wchar(va_list ap);
char				*ft_ret_wchar2(wchar_t c);
char				*ft_ret_char(va_list ap);

char				*ft_ret_str(va_list ap);
char				*ft_ret_str_long(va_list ap);
char				*ft_ret_i(va_list ap);
char				*ft_ret_long_i(va_list ap);
char				*ft_ret_long_long_i(va_list ap);
char				*ft_ret_unsigned_i(va_list ap);
char				*ft_ret_unsigned_long_i(va_list ap);
char				*ft_ret_unsigned_long_long_i(va_list ap);
char				*ft_ret_pointer(va_list ap);
char				*ft_ret_octal(va_list ap);
char				*ft_ret_long_octal(va_list ap);
char				*ft_ret_unsigned_hex(va_list ap);
char				*ft_ret_unsigned_hex_cap(va_list ap);
char				*ft_ret_unsigned_long_hex(va_list ap);
char				*ft_ret_long_long_octal(va_list ap);
char				*ft_ret_unsigned_hex_long_cap(va_list ap);
char				*ft_ret_unsigned_long_long_hex(va_list ap);
char				*ft_ret_unsigned_hex_long_long_cap(va_list ap);
char				*ft_ret_short_i(va_list ap);
char				*ft_ret_short_octal(va_list ap);
char				*ft_ret_unsigned_short_hex(va_list ap);
char				*ft_ret_unsigned_short_hex_cap(va_list ap);
char				*ft_ret_unsigned_short_i(va_list ap);

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
size_t				ft_longintlen(long long int num);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_concat(char *s1, char *s2);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, \
		const char *little, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_capitalize(char *src);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);

char				*ft_itoa(int n);
char				*ft_itoa_base(long long int i, unsigned int base);
char				*ft_uitoa_base(long long unsigned int i, unsigned int base);
char				*ft_sitoa_base(short int i, unsigned int base);
char				*ft_usitoa_base(unsigned short int i, unsigned int base);

void				ft_putstr(const char *s);
void				ft_putendl(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_listddend(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

int					ft_numlen(int n);
int					ft_numlen_base(long long unsigned int i, unsigned int base);
int					ft_abs(int n);
size_t				ft_strxlen(const char *s, char c);
void				*ft_strndup(const char *s, size_t n);
t_list				*ft_lstforceadd(t_list **aslt, t_list *new);
#endif
