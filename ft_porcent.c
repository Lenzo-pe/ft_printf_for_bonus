/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_porcent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 12:00:06 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/26 12:15:01 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_printascii(t_speci *val, t_edit edit)
{
	if (!val->mode.left && edit.spaces)
		ft_putnchar(edit.tspaces, edit.spaces);
	ft_putchar('%');
	if (val->mode.left && edit.spaces)
		ft_putnchar(edit.tspaces, edit.spaces);
}

static t_edit	ft_asciilab(t_speci *val)
{
	t_edit edit;

	edit.spaces = 0;
	if (val->mode.zero && !val->mode.left)
		edit.tspaces = '0';
	else
		edit.tspaces = ' ';
	if (val->width > 0)
		edit.spaces = val->width - 1;
	return (edit);
}

void			ft_porcent(t_speci *val)
{
	t_edit edit;

	edit = ft_asciilab(val);
	ft_printascii(val, edit);
	val->len += 1 + edit.spaces;
}
