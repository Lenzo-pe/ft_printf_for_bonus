/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iwtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 20:30:36 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/31 17:01:54 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	*ft_memset(void *ptr, int c, size_t num)
{
	unsigned char	*str;
	unsigned char	value;

	str = ptr;
	value = (unsigned char)c;
	while (num--)
		*str++ = value;
	return (ptr);
}

static void	ft_itoc(char *str, int n, int i)
{
	long int	num;

	num = n;
	if (n < 0)
		num *= -1;
	if (num >= 10)
		ft_itoc(str, (num / 10), i - 1);
	str[i] = ((num % 10) + '0');
}

char		*ft_iwtoa(long long n, size_t w)
{
	char	*str;
	size_t	len;

	len = ft_nbrlen(n);
	if (n < 0)
		len++;
	if (w > len)
		w -= len;
	else 
		w = 0;
	str = (char *)malloc(sizeof(char) * (len + w + 1));
	if (!str)
		return (NULL);
	ft_memset(str + 1, '0', w);
	ft_itoc(str + w, n, len - 1);
	if (n < 0)
		str[0] = '-';
	str[len + w] = '\0';
	return (str);
}