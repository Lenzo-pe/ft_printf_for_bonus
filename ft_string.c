/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:48:37 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/26 12:15:24 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_printstr(t_speci *val, t_edit edit, char *str)
{
	if (!val->mode.left && edit.spaces)
		ft_putnchar(edit.tspaces, edit.spaces);
	ft_putnstr(str, val->slen);
	if (val->mode.left && edit.spaces)
		ft_putnchar(edit.tspaces, edit.spaces);
}

static t_edit	ft_strlab(t_speci *val)
{
	t_edit edit;

	if (!val->mode.left && val->mode.zero)
		edit.tspaces = '0';
	else
		edit.tspaces = ' ';
	if (val->mode.preci && (val->preci < val->slen))
		val->slen = val->preci;
	edit.spaces = val->width - val->slen;
	if (edit.spaces < 0)
		edit.spaces = 0;
	return (edit);
}

void			ft_string(t_speci *val, va_list ap)
{
	char	*str;
	t_edit	edit;

	str = va_arg(ap, char *);
	if (!str)
		str = "(null)";
	val->slen = ft_strlen(str);
	edit = ft_strlab(val);
	ft_printstr(val, edit, str);
	val->len += val->slen + edit.spaces;
}
