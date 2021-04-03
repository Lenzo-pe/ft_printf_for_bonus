/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 00:17:21 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/03 02:17:17 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printright(t_speci *val, t_edit edit)
{
	ft_putnchar(' ', edit.spaces);
	ft_putsignal(val);
	ft_putnchar('0', edit.zeros);
	ft_putstr(val->str);
}

static void	ft_printleft(t_speci *val, t_edit edit)
{
	ft_putsignal(val);
	ft_putnchar('0', edit.zeros);
	ft_putstr(val->str);
	ft_putnchar(' ', edit.spaces);
}

static void	ft_printinteger(t_speci *val, t_edit edit)
{
	if (!val->mode.left)
		ft_printright(val, edit);
	else
		ft_printleft(val, edit);
}

static void	ft_setnegative(t_speci *val)
{
	val->slen++;
	val->preci++;
	val->mode.negat = true;
	val->mode.space = false;
	val->mode.plus = false;
}

void		ft_integer(t_speci *val, va_list ap)
{
	t_edit		edit;
	long long	n;

	n = va_arg_i(ap, val);
	val->slen = ft_nbrlen(n);
	if (n < 0)
		ft_setnegative(val);
	n = ft_abs(n);
	if (!n && val->mode.preci && !val->preci)
	{
		val->slen--;
		val->str = ft_strdup("");
	}
	else
		val->str = ft_itoa(n);
	if (val->mode.space || val->mode.plus)
	{
		val->slen++;
		val->preci++;
	}
	edit = ft_numberlab(val);
	ft_printinteger(val, edit);
	val->len += edit.spaces + edit.zeros + val->slen;
	ft_strdel(&val->str);
}
