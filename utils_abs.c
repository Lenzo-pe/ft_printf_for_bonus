/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_abs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:12:30 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/04/02 17:00:30 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long	ft_abs(long long n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

long double	ft_fabs(long double n)
{
	if (n < 0)
		n *= -1.0;
	return (n);
}

int			ft_nan(long double n)
{
	if (n != n)
		return (1);
	return (0);
}

int			ft_inf(long double n)
{
	if (n == INFINITY || n == -INFINITY)
		return (1);
	return (0);
}
