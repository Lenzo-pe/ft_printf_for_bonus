/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsignal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 00:10:52 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/31 00:17:47 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putsignal(t_speci *val)
{
	if (val->mode.negat)
		ft_putchar('-');
	else if (val->mode.space)
		ft_putchar(' ');
	else if (val->mode.plus)
		ft_putchar('+');
}