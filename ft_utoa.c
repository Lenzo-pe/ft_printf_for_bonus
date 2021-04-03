/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:13:18 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/02 23:31:19 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_convert(char *str, unsigned long long n, int i)
{
	unsigned long long num;

	num = n;
	if (n < 0)
		num *= -1;
	if (num >= 10)
		ft_convert(str, (num / 10), i - 1);
	str[i] = ((num % 10) + '0');
}

char		*ft_utoa(unsigned long long n)
{
	char	*str;
	size_t	len;

	if (!n)
		return (ft_strdup("0"));
	len = ft_unbrlen(n);
	if (n < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_convert(str, n, len - 1);
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}
