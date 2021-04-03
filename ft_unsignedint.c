/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:32:54 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/03 12:21:35 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printright(t_speci *val, t_edit edit)
{
	ft_putnchar(' ', edit.spaces);
	ft_putnchar('0', edit.zeros);
	ft_putstr(val->str);
}

static void	ft_printleft(t_speci *val, t_edit edit)
{
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

void		ft_unsignedint(t_speci *val, va_list ap)
{
	t_edit				edit;
	unsigned long long	n;

	n = va_arg_u(ap, val);
	if (!n && val->mode.preci && !val->preci)
		val->str = ft_strdup("");
	else
		val->str = ft_utoa(n);
	val->slen = ft_strlen(val->str);
	edit = ft_numberlab(val);
	ft_printinteger(val, edit);
	val->len += edit.spaces + edit.zeros + val->slen;
	ft_strdel(&val->str);
}
