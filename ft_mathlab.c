/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mathlab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:09:12 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/25 14:54:57 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_edit	ft_mathlab(t_speci *val)
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
