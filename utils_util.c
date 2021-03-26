/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 21:23:55 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/25 23:06:41 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long	ft_abs(long long n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

static void	ft_swapchr(char *a, char *b)
{
	char x;

	if (!a || !b)
		return ;
	x = a[0];
	a[0] = b[0];
	b[0] = x;
}

void		ft_strrev(char *str)
{
	int i;
	int j;

	if (!str)
		return ;
	j = ft_strlen(str) - 1;
	i = 0;
	while (i < j)
	{
		ft_swapchr(&str[i], &str[j]);
		i++;
		j--;
	}
}
