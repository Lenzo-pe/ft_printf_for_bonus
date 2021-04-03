/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:16:33 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/03 17:09:36 by lenzo-pe         ###   ########.fr       */
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
	//n = ft_abs(n);
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

static void	ft_right(char *str, long double n, size_t len)
{
	long long unsigned i;
	*str++ = '.';
	while (len--)
	{
		i = n * 10;
		if (!len)
			i = ft_round(n * 10);
		i = (i % 10) + '0';
		*str++ = i;
		n *= 10;
		n -= (unsigned)n;
	}
	*str = '\0';	
}

char		*ft_ftoa(long double n, size_t len)
{
	size_t				leftlen;
	unsigned long long	left;
	long double			right;
	char				*str;

	right = 0;
	if (!len)
		return(ft_itoa(ft_round(n)));
	left = (unsigned long long)n;
	right = n - (long double)left;
	right = ft_fabs(right);
	leftlen = ft_unbrlen(left);
	str = (char *)malloc(sizeof(char) * (leftlen + len + 2));
	ft_nbrcpy(str, left);
	ft_right(str + leftlen, right, len);
	return (str);
}
