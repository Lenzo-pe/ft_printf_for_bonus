/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ietoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 20:30:36 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/30 20:30:53 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ietoa(long long n, size_t e)
{
	char	*str;
	size_t	len;

	len = ft_nbrlen(n);
	if (n < 0)
	{
		len++;
		str = ft_strdup("-");
		n = ft_abs(n);
	}
	else
		str = ft_strdup("");
	while (len < e--)
		str = ft_joindel(str, "0");
	str = ft_joindelall(str, ft_itoa(n));
	return (str);
}
