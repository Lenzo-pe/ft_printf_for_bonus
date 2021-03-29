/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 00:51:53 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/29 00:52:27 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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