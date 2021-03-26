/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whatisnext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:04:21 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/26 15:44:37 by lenzo-pe         ###   ########.fr       */
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
	int	def;

	form++;
	def = definef(form, val);
	if (!def)
		return (FT_ERROR);
	pre_settings(val);
	settings(form, val, ap);
	if (def == '%')
		ft_porcent(val);
	if (def == 'c')
		ft_character(val, ap);
	if (def == 's')
		ft_string(val, ap);
	if (def == 'd' || def == 'i')
		ft_integer(val, ap);
	if (def == 'u')
		ft_unsignedint(val, ap);
	if (def == 'x' || def == 'X')
		ft_hexadecimal(val, ap, def);
	if (def == 'p')
		ft_pointer(val, ap);
	val->util.skip += 2;
	return (val->len);
}
