/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:07:07 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/26 18:17:58 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_putnchar(char c, size_t n)
{
	if (c && n > 0)
		while (n--)
			write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	size_t len;

	len = ft_strlen(str);
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnstr(char *str, size_t n)
{
	size_t len;

	len = ft_strnlen(str, n);
	while (*str != '\0' && len--)
		ft_putchar(*str++);
}

void	ft_putnbr(long long nb)
{
	long long num;

	num = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar((num % 10) + '0');
}
