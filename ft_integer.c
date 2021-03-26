/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 00:17:21 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/26 16:47:57 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printright(t_speci *val, t_edit edit)
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
}

static void	ft_printleft(t_speci *val, t_edit edit)
{
	if (val->mode.negat)
		ft_putchar('-');
	else if (val->mode.space)
		ft_putchar(' ');
	else if (val->mode.plus)
		ft_putchar('+');
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

void		ft_integer(t_speci *val, va_list ap)
{
	t_edit	edit;
	long	n;

	n = va_arg(ap, int);
	val->slen = ft_nbrlen(n);
	if (n < 0)
	{
		n = ft_abs(n);
		val->slen++;
		val->preci++;
		val->mode.negat = true;
		val->mode.space = false;
		val->mode.plus = false;
	}
	if (!n && val->mode.preci && !val->preci)
	{
		val->slen--;
		val->str = ft_strdup("");
	}
	else if (!n)
		val->str = ft_strdup("0");
	else
		val->str = ft_itoa(n);
	if (val->mode.space)
	{
		val->slen++;
		val->preci++;
	}
	if (val->mode.plus)
	{
		val->slen++;
		val->preci++;
	}
	edit = ft_mathlab(val);
	ft_printinteger(val, edit);
	val->len += edit.spaces + edit.zeros + val->slen;
	ft_strdel(&val->str);
}
