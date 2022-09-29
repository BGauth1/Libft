/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:49:58 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/26 17:06:31 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	i;
	int		*buff_dest;
	int		*buff_src;

	i = 0;
	buff_dest = dest;
	buff_src = src;
	while (i < n)
	{
		*buff_dest = *buff_src;
		buff_dest++;
		buff_src++;
		i++;
	}
	return (dest);
}
