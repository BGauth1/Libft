/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:00:42 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/29 17:34:56 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*buff_s1;
	const unsigned char	*buff_s2;
	size_t				i;

	buff_s1 = (const unsigned char *)s1;
	buff_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*buff_s1 != *buff_s2)
			return (buff_s1 - buff_s2);
		buff_s1++;
		buff_s2++;
		i++;
	}
	return (0);
}
