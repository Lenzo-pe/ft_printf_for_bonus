/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_ism.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 02:59:35 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/28 01:11:47 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_isflag(int c)
{
	if (c == '-' || c == '+' || c == ' ' ||
	c == '\'' || c == '0' || c == '#')
		return (1);
	return (0);
}

int		ft_islength(int c)
{
	if (c == 'h' || c == 'l' || c == 'L' ||
	c == 'z' || c == 'j' || c == 't')
		return (1);
	return (0);
}

int		ft_islegal(int c)
{
	if (ft_isflag(c) || ft_isdigit(c) ||
	c == '*' || c == '.' || ft_islength(c))
		return (1);
	return (0);
}

int		ft_isspecifier(int c)
{
	if (c == '%' || c == 'c' || c == 's' || c == 'd' || c == 'i' ||
	c == 'u' || c == 'p' || c == 'x' || c == 'X' || c == 'n' ||
	c == 'f')
		return (1);
	return (0);
}
