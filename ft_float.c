/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 02:56:42 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/02 18:28:15 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_printright(t_speci *val, t_edit edit)
{
	ft_putnchar(' ', edit.spaces);
	ft_putsignal(val);
	ft_putnchar('0', edit.zeros);
	ft_putstr(val->str);
}

static void		ft_printleft(t_speci *val, t_edit edit)
{
	ft_putsignal(val);
	ft_putstr(val->str);
	ft_putnchar(' ', edit.spaces);
}

static void		ft_printfloat(t_speci *val, t_edit edit)
{
	if (!val->mode.left)
		ft_printright(val, edit);
	else
		ft_printleft(val, edit);
}

static void		ft_setnegative(t_speci *val, long double n)
{
	if (n >= 0)
		return ;
	val->slen++;
	val->mode.negat = true;
	val->mode.space = false;
	val->mode.plus = false;
}

void		ft_float(t_speci *val, va_list ap)
{
	long double	n;
	t_edit		edit;

	n = va_arg(ap, double);
	if (!val->mode.preci)
		val->preci = 6;
	ft_setnegative(val, n);
	n = ft_fabs(n);
	if (val->mode.space || val->mode.plus)
		val->slen++;
	if (ft_inf(n) || ft_nan(n))
		ft_strnan(val, n);
	else
		val->str = ft_ftoa(n, val->preci);
	val->slen += ft_strlen(val->str);
	edit = ft_floatlab(val);
	ft_printfloat(val, edit);
	val->len += val->slen + edit.spaces + edit.zeros;
	ft_strdel(&val->str);
}
