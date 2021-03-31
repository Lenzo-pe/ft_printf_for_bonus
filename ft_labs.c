/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_labs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:09:12 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/30 22:53:05 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_edit	ft_numberlab(t_speci *val)
{
	t_edit	edit;

	if (val->slen > val->preci)
	{
		edit.spaces = val->width - val->slen;
		edit.zeros = 0;
	}
	else
	{
		edit.spaces = val->width - val->preci;
		edit.zeros = val->preci - val->slen;
	}
	if (edit.spaces < 0)
		edit.spaces = 0;
	if (val->mode.zero && !val->mode.preci && !val->mode.left)
	{
		edit.zeros = edit.spaces;
		edit.spaces = 0;
	}
	return (edit);
}

t_edit	ft_asciilab(t_speci *val)
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
