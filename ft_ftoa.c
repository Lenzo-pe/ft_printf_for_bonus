/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:16:33 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/29 15:42:21 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_ftoa(long double n, size_t len)
{
	uint64_t	left;
	uint64_t	right;
	char		*str;

	left = (unsigned int)n;
	n = n - (double)left;
	str = ft_itoa(left);
	if (len)
	{
		str = ft_joindel(str, ".");
		while(len--)
		{
			n *= 10;
			right = n;
			right %= 10;
			str = ft_joindelall(str, ft_itoa(right));
		}
	}
	return (str);
}
