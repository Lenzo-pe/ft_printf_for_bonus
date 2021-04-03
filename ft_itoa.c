/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 00:49:54 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/03 01:39:24 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_convert(char *str, long long n, int i)
{
	__int128_t	num;

	num = n;
	if (n < 0)
		num *= -1;
	if (num >= 10)
		ft_convert(str, (num / 10), i - 1);
	str[i] = ((num % 10) + '0');
}

char		*ft_itoa(long long n)
{
	char	*str;
	size_t	len;

	if (!n)
		return (ft_strdup("0"));
	len = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_convert(str, n, len - 1);
	str[len] = '\0';
	return (str);
}
