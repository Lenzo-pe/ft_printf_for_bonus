/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:43:45 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/26 12:15:41 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# define FT_ERROR -1

typedef struct	s_editor
{
	int			strlen;
	int			spaces;
	int			zeros;
	char		tspaces;
}				t_edit;

typedef struct	s_modes
{
	bool		zero;
	bool		left;
	bool		width;
	bool		preci;
	bool		negat;
}				t_modes;

typedef struct	s_utilities
{
	int			skip;
	int			error;
}				t_utils;

typedef struct	s_specifiers
{
	int			len;
	int			width;
	int			preci;
	char		*str;
	int			slen;
	t_modes		mode;
	t_utils		util;
}				t_speci;

int				ft_printf(const char *format, ...);

int				ft_whatisnext(const char *form, va_list ap, t_speci *list);
void			settings(const char *form, t_speci *val, va_list ap);

void			ft_integer(t_speci *val, va_list ap);
void			ft_unsignedint(t_speci *val, va_list ap);
void			ft_hexadecimal(t_speci *val, va_list ap, int def);
void			ft_pointer(t_speci *val, va_list ap);
void			ft_character(t_speci *val, va_list ap);
void			ft_string(t_speci *val, va_list ap);
void			ft_porcent(t_speci *val);

long long		ft_abs(long long n);

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnchar(char c, size_t n);
char			*ft_strdup(const char *str);
void			ft_strdel(char **str);
void			ft_putnstr(char *str, size_t n);

void			ft_strrev(char *str);
size_t			ft_strlen(const char *str);
size_t			ft_strnlen(const char *str, size_t maxlen);
size_t			ft_nbrlen(long long n);
size_t			xnbrlen(unsigned long long n);

t_edit			ft_mathlab(t_speci *val);

int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_isspace(int c);
int				ft_islower(int c);
int				ft_isupper(int c);

int				ft_islegal(int c);
int				ft_isflag(int c);
int				ft_isspecifier(int c);

int				ft_atoi(const char *nptr);
char			*ft_xtoa(unsigned long long n, int c);
char			*ft_itoa(long long n);

#endif
