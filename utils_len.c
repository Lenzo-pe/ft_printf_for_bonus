/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:07:00 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/25 19:43:06 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strnlen(const char *str, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (maxlen > i && str[i])
		i++;
	return (i);
}

size_t	ft_nbrlen(long long n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (1);
	while (n)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

size_t	xnbrlen(unsigned long long n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (1);
	while (n)
	{
		n = (n / 16);
		i++;
	}
	return (i);
}
