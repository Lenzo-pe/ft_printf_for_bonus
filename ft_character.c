/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 22:40:14 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/30 22:50:04 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_printascii(t_speci *val, t_edit edit, int c)
{
	if (!val->mode.left && edit.spaces)
		ft_putnchar(edit.tspaces, edit.spaces);
	ft_putchar(c);
	if (val->mode.left && edit.spaces)
		ft_putnchar(edit.tspaces, edit.spaces);
}

void			ft_character(t_speci *val, va_list ap)
{
	int		c;
	t_edit	edit;

	c = va_arg(ap, int);
	edit = ft_asciilab(val);
	ft_printascii(val, edit, c);
	val->len += 1 + edit.spaces;
}
