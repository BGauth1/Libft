/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:49:58 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/29 15:37:21 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*bdest;
	unsigned char	*bsrc;

	bdest = (unsigned char *)dest;
	bsrc = (unsigned char *)src;
	if ((const void *)dest < src)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		bdest[n - 1] = bsrc[n - 1];
		n--;
	}
	return (dest);
}
