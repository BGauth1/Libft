/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:49:58 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/27 17:59:35 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*bdest;
	char	*bsrc;

	bdest = dest;
	bsrc = src;
	if (&bdest < &bsrc)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		bdest[n - 1] = bsrc[n - 1];
		n--;
	}
	return (dest);
}
