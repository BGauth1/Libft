/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:17:06 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/27 16:13:55 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*buff;
	char	*result;

	buff = (char *)s;
	result = NULL;
	while (*buff != 0)
	{
		if (*buff == c)
			result = buff;
		buff++;
	}
	if (*buff == c)
		return (buff);
	return (NULL);
}
