/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 02:56:42 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/29 03:06:08 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_float(t_speci *val, va_list ap)
{
	long double	n;

	n = va_arg(ap, double);
	if (!val->mode.preci)
		val->preci = 6;
	val->str = ft_ftoa(n, val->preci);
	val->slen = ft_strlen(val->str);
	ft_putstr(val->str);
	ft_strdel(&val->str);
}