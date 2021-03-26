/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:07:54 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/25 18:53:33 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_atoi(const char *nptr)
{
	int		holder;
	int		sign;

	sign = 1;
	holder = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
		holder = (holder * 10) + (*nptr++ - '0');
	return (holder * sign);
}

char		*ft_xtoa(unsigned long long n, int c)
{
	char			*ptr;
	unsigned long	temp;
	int				i;

	i = 0;
	if (!n)
		return (ft_strdup("0"));
	ptr = (char *)malloc(sizeof(char) * (xnbrlen(n) + 1));
	while (n)
	{
		temp = 0;
		temp = n % 16;
		if (temp >= 10 && ft_isupper(c))
			ptr[i] = temp + 55;
		else if (temp >= 10 && ft_islower(c))
			ptr[i] = temp + 87;
		else
			ptr[i] = temp + 48;
		i++;
		n = n / 16;
	}
	ptr[i] = '\0';
	ft_strrev(ptr);
	return (ptr);
}

static void	ft_convert(char *str, long long n, int i)
{
	long int	num;

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

	len = ft_nbrlen(n);
	if (n <= 0)
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
