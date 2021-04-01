/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:16:33 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/01 20:01:42 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	long double ft_round(long double n)
{
	long double right;
	long unsigned left;

	left = (unsigned)n;
	right = n - (double)left;

	if (right > 0.5)
		n += 0.5;
	else if (right == 0.5)
	{
		if ((left % 2))
			n += 0.5;
	}
	return((unsigned long)n);
}

static int		ft_tochar(long long n)
{
	n = ft_abs(n);
	return ((n % 10) + '0');
}

static char	*ft_nbrcpy(char *dest, long long n)
{
	size_t	len;
	size_t	maxlen;

	len = ft_nbrlen(n);
	maxlen = len;
	if (!n)
		dest[0] = '0';
	while (n)
	{
		dest[--len] = ft_tochar(n);
		n /= 10;
	}
	dest[maxlen] = '\0';
	return (dest);
}

static void	ft_right(char *str, double long n, size_t len)
{
	size_t	zeros;

	zeros = 0;
	while (!(n * 10) && len--)
	{
		zeros++;
		n *= 10;
	}
	*str++ = '.';
	while (zeros--)
		*str++ = '0';
	while (len--)
		n *= 10;
	ft_nbrcpy(str, n);
}

char		*ft_ftoa(long double n, size_t len)
{
	unsigned long	left;
	long double		right;
	char			*str;

	right = 0;
	if (!len)
		return(ft_itoa(ft_round(n)));
	left = (unsigned)n;
	right = n - (long double)left;
	str = (char *)malloc(sizeof(char) * (ft_nbrlen(left) + len + 2));
	ft_nbrcpy(str, left);
	ft_right(str + ft_nbrlen(left), right, len);
	return (str);
}
