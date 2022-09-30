/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:23:53 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/29 16:38:36 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*buff;
	size_t	i;
	size_t	j;

	buff = (char *)src;
	i = 0;
	j = ft_strlen(dst);
	if (j >= size)
		return (size + ft_strlen(buff));
	while (i + j < size - 1 && buff[i] != '\0')
	{
		dst[i + j] = buff[i];
		i++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(buff) + j);
}
