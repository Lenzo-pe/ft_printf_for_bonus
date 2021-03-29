/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:16:33 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/29 02:13:38 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_ftoa(long double n, size_t len)
{
	uint64_t	left;
	uint64_t	right;
	uint64_t	pow;
	size_t		i;
	char		*str;

	pow = 1;
	i = len;
	while (i--)
		pow *= 10;
	left = (unsigned int)n;
	n = n - (double)left;
	right = n * pow;
	right = right % pow;
	str = ft_itoa(left);
	if (len)
		str = ft_joindel(str, ".");
	str = ft_joindelall(str, ft_itoa(right));
	return (str);
}
