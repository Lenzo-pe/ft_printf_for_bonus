/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_float.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:15:54 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/01 15:46:44 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long double	ft_powe(long double n, int e)
{
	if (e > 0)
		while (e--)
			n /= 10;
	else if(e < 0)
		while (e++)
			n *= 10;
	return(n);
}

int			ft_exp(long double n)
{
	int e;

	e = 0;
	if (!n)
		return (0);
	while ((long unsigned)n / 10)
	{
		n /= 10;
		e++;
	}
	while (!((long unsigned)n))
	{
		n *= 10;
		e--;
	}
	return (e);
}

char		*ft_exx(int e)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 5);
	str[0] = 'e';
	if (e < 0)
		str[1] = '-';
	else
		str[1] = '+';
	e = ft_abs(e);
	if (e > 9)
		str[2] = e /10 + '0';
	else
		str[2] = '0';
	str[3] = e % 10 + '0';
	str[4] = '\0';
	return (str);
}
