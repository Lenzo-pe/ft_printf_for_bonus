/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whatisnext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:04:21 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/01 13:39:07 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	pre_settings(t_speci *val)
{
	val->mode.left = false;
	val->mode.zero = false;
	val->mode.preci = false;
	val->mode.width = false;
	val->mode.negat = false;
	val->mode.space = false;
	val->mode.plus = false;
	val->c = 0;
	val->slen = 0;
	val->width = 0;
	val->preci = 0;
}

static int	definef(const char *form, t_speci *val)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)form;
	val->util.skip = 0;
	while (!(ft_isspecifier(ptr[i])))
	{
		if (!(ft_islegal(ptr[i])))
			return (0);
		i++;
	}
	val->util.skip = i;
	return (ptr[i]);
}

int			ft_whatisnext(const char *form, va_list ap, t_speci *val)
{
	form++;
	pre_settings(val);
	val->c = definef(form, val);
	if (!val->c)
		return (FT_ERROR);
	settings(form, val, ap);
	if (val->c == '%' || val->c == 'c')
		ft_ascii(val, ap);
	if (val->c == 's')
		ft_string(val, ap);
	if (val->c == 'd' || val->c == 'i')
		ft_integer(val, ap);
	if (val->c == 'u')
		ft_unsignedint(val, ap);
	if (val->c == 'x' || val->c == 'X')
		ft_hexadecimal(val, ap);
	if (val->c == 'p')
		ft_pointer(val, ap);
	if (val->c == 'n')
		ft_number(val, ap);
	if (val->c == 'f')
		ft_float(val, ap);
	if (val->c == 'e')
		ft_floatexp(val, ap);
	val->util.skip += 2;
	return (val->len);
}
