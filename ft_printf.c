/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 02:26:06 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/26 12:55:46 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_chrcmp(int a, int b)
{
	return (a - b);
}

int			ft_printf(const char *format, ...)
{
	size_t	i;
	t_speci	val;
	va_list	ap;

	i = 0;
	val.len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (!(ft_chrcmp(format[i], '%')))
		{
			if ((ft_whatisnext(&format[i], ap, &val)) == FT_ERROR)
				return (FT_ERROR);
			i += val.util.skip;
			continue ;
		}
		ft_putchar(format[i]);
		val.len++;
		i++;
	}
	va_end(ap);
	return (val.len);
}
