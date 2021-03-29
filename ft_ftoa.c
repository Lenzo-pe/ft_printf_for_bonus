/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:16:33 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/29 01:01:47 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static char	*ft_strcpy(char *dest, const char *src)
{
	char *ptr;

	ptr = dest;
	while ((*ptr = *src++) != 0)
		ptr++;
	return (dest);
}

static char	*ft_strcat(char *dest, const char *src)
{
	ft_strcpy((dest + ft_strlen(dest)), src);
	return (dest);
}

static char	*ft_joindel(char *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s2_len + s1_len;
	ptr = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!ptr)
	{
		ft_strdel(&s1);
		return (NULL);
	}
	ft_strcpy(ptr, s1);
	ft_strcat(ptr, s2);
	ft_strdel(&s1);
	return (ptr);
}

static char	*ft_joindelall(char *s1, char *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s2_len + s1_len;
	ptr = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!ptr)
	{
		ft_strdel(&s1);
		ft_strdel(&s2);
		return (NULL);
	}
	ft_strcpy(ptr, s1);
	ft_strcat(ptr, s2);
	ft_strdel(&s1);
	ft_strdel(&s2);
	return (ptr);
}

char		*ft_ftoa(long double n, size_t len)
{
	uint64_t	left;
	uint64_t	right;
	uint64_t	pow;
	size_t		i;
	char		*str;

	pow = 1;
	i = len;
	while (i--)
		pow *= 10;
	left = (unsigned int)n;
	n = n - (double)left;
	right = n * pow;
	right =  right % pow;

	str = ft_itoa(left);
	if (len)
		str = ft_joindel(str, ".");
	str = ft_joindelall(str, ft_itoa(right));
	return (str);
}
