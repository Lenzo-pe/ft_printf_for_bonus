/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exponent.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:08:18 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/30 23:33:52 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		exponent(long double n)
{
	int e;

	e = 0;
	if (!n)
		return (0);
	while ((long unsigned)n / 10)
	{
		n /= 10;
		e++;
	}
	while (!((long unsigned)n))
	{
		n *= 10;
		e--;
	}
	return (e);
}

static void		ft_printright(t_speci *val, t_edit edit, long double n, char *xxe)
{
	ft_putnchar(' ', edit.spaces);
	if (val->mode.negat)
		ft_putchar('-');
	else if (val->mode.space)
		ft_putchar(' ');
	else if (val->mode.plus)
		ft_putchar('+');
	ft_putnchar('0', edit.zeros);
	ft_putstr(val->str);
	if (n != INFINITY && n != NAN)
	{
		ft_putstr("e");
		ft_putstr(xxe);
	}
}

static void		ft_printleft(t_speci *val, t_edit edit, long double n, char *xxe)
{
	if (val->mode.negat)
		ft_putchar('-');
	else if (val->mode.space)
		ft_putchar(' ');
	else if (val->mode.plus)
		ft_putchar('+');
	ft_putstr(val->str);
	if (n != INFINITY && n != NAN)
	{
		ft_putstr("e");
		ft_putstr(xxe);
	}
	ft_putnchar(' ', edit.spaces);
}

static void		ft_printexponent(t_speci *val, t_edit edit, long double n, char *xxe)
{
	if (!val->mode.left)
		ft_printright(val, edit, n, xxe);
	else
		ft_printleft(val, edit, n, xxe);
}

static void		ft_setnegative(t_speci *val)
{
	val->slen++;
	val->mode.negat = true;
	val->mode.space = false;
	val->mode.plus = false;
}

void		ft_exponent(t_speci *val, va_list ap)
{
	t_edit			edit;
	char			*xxe;
	long double		n;
	int				e;
	
	e = 0;
	val->slen += 4;
	n = va_arg(ap, double);
	if (!val->mode.preci)
		val->preci = 6;
	if (n < 0)
	{	
		ft_setnegative(val);
		n = ft_fabs(n);
	}
	if (val->mode.space || val->mode.plus)
		val->slen++;
	if (n == INFINITY)
	{
		val->str = ft_strdup("inf");
		val->mode.zero = false;
		val->slen -= 4;
	}
	else if (n == NAN)
	{
		val->str = ft_strdup("nan");
		val->mode.zero = false;
		val->slen -= 4;
	}
	else
		val->str = ft_ftoa(n, val->preci);
	val->slen += ft_strlen(val->str);
	edit = ft_floatlab(val);
	e = exponent(n);
	xxe = ft_ietoa(e, 3);
	ft_printexponent(val, edit, n, xxe);
	val->len += val->slen + edit.spaces + edit.zeros;
	ft_strdel(&val->str);
}
