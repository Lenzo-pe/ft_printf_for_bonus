/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floatexp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:08:18 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/02 15:29:45 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_printright(t_speci *val, t_edit edit, long double n)
{
	ft_putnchar(' ', edit.spaces);
	ft_putsignal(val);
	ft_putnchar('0', edit.zeros);
	ft_putstr(val->str);
	if (n != INFINITY && !ft_nan(n))
		ft_putstr(val->util.temp);
}

static void		ft_printleft(t_speci *val, t_edit edit, long double n)
{
	ft_putsignal(val);
	ft_putstr(val->str);
	if (n != INFINITY && !ft_nan(n))
		ft_putstr(val->util.temp);
	ft_putnchar(' ', edit.spaces);
}

static void		ft_printexponent(t_speci *val, t_edit edit, long double n)
{
	if (!val->mode.left)
		ft_printright(val, edit, n);
	else
		ft_printleft(val, edit, n);
}

static void		ft_setnegative(t_speci *val)
{
	val->slen++;
	val->mode.negat = true;
	val->mode.space = false;
	val->mode.plus = false;
}

void		ft_floatexp(t_speci *val, va_list ap)
{
	t_edit			edit;
	long double		n;
	int				e;

	e = 0;
	n = va_arg(ap, double);
	if (n != INFINITY && !ft_nan(n) && n != -INFINITY)
	{
		val->slen += 4;
		e = ft_exp(n);
		val->util.temp = ft_exx(e);
	}
	if (!val->mode.preci)
		val->preci = 6;
	n = ft_powe(n, e);
	if (n < 0)
	{	
		ft_setnegative(val);
		n = ft_fabs(n);
	}
	if (val->mode.space || val->mode.plus)
		val->slen++;
	if (n == INFINITY || ft_nan(n))
	{
		val->mode.zero = false;
		if (n == INFINITY)
			val->str = ft_strdup("inf");
		else if (ft_nan(n))
			val->str = ft_strdup("nan");
	}
	else
		val->str = ft_ftoa(n, val->preci);
	val->slen += ft_strlen(val->str);
	edit = ft_floatlab(val);
	ft_printexponent(val, edit, n);
	val->len += val->slen + edit.spaces + edit.zeros;
	ft_strdel(&val->str);
	if (n != INFINITY && !ft_nan(n))
		ft_strdel(&val->util.temp);
}
