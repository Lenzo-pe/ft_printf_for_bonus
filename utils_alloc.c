/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_alloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenzo-pe <lenzo-pe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:20:26 by lenzo-pe          #+#    #+#             */
/*   Updated: 2021/03/29 02:11:51 by lenzo-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (!dest && !src)
		return (dest);
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	while (num--)
		*str1++ = *str2++;
	return (dest);
}

char		*ft_strdup(const char *str)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(str) + 1;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	return (ft_memcpy(ptr, str, len));
}

void		ft_strdel(char **str)
{
	if (!(str && *str))
		return ;
	free(*str);
	*str = NULL;
}

char		*ft_joindel(char *s1, char const *s2)
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

char		*ft_joindelall(char *s1, char *s2)
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
