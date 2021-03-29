/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:34:47 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/29 01:15:28 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printright(t_speci *val, t_edit edit)
{
	ft_putnchar(' ', edit.spaces);
	ft_putstr("0x");
	ft_putnchar('0', edit.zeros);
	ft_putstr(val->str);
}

static void	ft_printleft(t_speci *val, t_edit edit)
{
	ft_putstr("0x");
	ft_putnchar('0', edit.zeros);
	ft_putstr(val->str);
	ft_putnchar(' ', edit.spaces);
}

static void	ft_printpointer(t_speci *val, t_edit edit)
{
	if (!val->mode.left)
		ft_printright(val, edit);
	else
		ft_printleft(val, edit);
}

void		ft_pointer(t_speci *val, va_list ap)
{
	t_edit				edit;
	unsigned long long	n;

	n = va_arg(ap, unsigned long long);
	val->slen = xnbrlen(n) + 2;
	if (!n && val->mode.preci && !val->preci)
	{
		val->str = ft_strdup("");
		val->slen--;
	}
	else
		val->str = ft_xtoa(n, 'a');
	if (val->mode.preci)
		val->preci += 2;
	edit = ft_mathlab(val);
	val->preci -= 2;
	ft_printpointer(val, edit);
	val->len += edit.spaces + edit.zeros + val->slen;
	ft_strdel(&val->str);
}
