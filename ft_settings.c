/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_settings.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:08:08 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/26 15:29:10 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	set_flags(const char *form, t_speci *val)
{
	if (*form == '0' && !val->mode.left)
		val->mode.zero = true;
	if (*form == '-')
	{
		val->mode.zero = false;
		val->mode.left = true;
	}
	if (*form == ' ' && !val->mode.plus)
		val->mode.space = true;
	if (*form == '+')
	{
		val->mode.plus = true;
		val->mode.space = false;
	}
}

static void	set_width(const char *form, t_speci *val, va_list ap)
{
	if (ft_isdigit(*form) || *form == '-')
		val->width = ft_atoi(form);
	else if (*form == '*')
	{
		val->width = va_arg(ap, int);
		if (val->width < 0)
		{
			val->mode.left = true;
			val->width = ft_abs(val->width);
		}
	}
	val->mode.width = true;
}

static void	set_precision(const char *form, t_speci *val, va_list ap)
{
	form++;
	val->mode.preci = true;
	if (ft_isdigit(*form))
		val->preci = ft_atoi(form);
	else if (*form == '*')
	{
		val->preci = va_arg(ap, int);
		if (val->preci < 0)
			val->mode.preci = false;
	}
}

void		settings(const char *form, t_speci *val, va_list ap)
{
	while (ft_isflag(*form))
	{
		set_flags(form, val);
		form++;
	}
	if (ft_isdigit(*form) || *form == '*')
	{
		set_width(form, val, ap);
		if (*form == '*')
			form++;
		else if (val->mode.width)
			form += ft_nbrlen(val->width);
	}
	if (*form == '.')
		set_precision(form, val, ap);
}
