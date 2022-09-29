/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:17:06 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/27 14:10:40 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*buff;

	buff = (char *)s;	
	while (*buff != 0)
	{
		if (*buff == c)
			return (buff);
		buff++;
	}
	if (*buff == c)
		return (buff);
	return (NULL);
}
