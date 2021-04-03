/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pft_va_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:49:26 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/03 02:15:48 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long long	va_arg_u(va_list ap, t_speci *val)
{
	unsigned long long	n;

	if (val->lc.ll)
		n = va_arg(ap, unsigned long long);
	else if(val->lc.l)
		n = va_arg(ap, unsigned long);
	else if (val->lc.hh)
		n = (unsigned char)va_arg(ap, unsigned);
	else if(val->lc.h)
		n = (unsigned short)va_arg(ap, unsigned);
	else
		n = va_arg(ap, unsigned);
	return (n);
}

long long	va_arg_i(va_list ap, t_speci *val)
{
	long long	n;

	if (val->lc.ll)
		n = va_arg(ap, long long);
	else if(val->lc.l)
		n = va_arg(ap, long);
	else if (val->lc.hh)
		n = (char)va_arg(ap, unsigned);
	else if(val->lc.h)
		n = (short)va_arg(ap, unsigned);
	else
		n = va_arg(ap, int);
	return (n);
}