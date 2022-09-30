/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:02:02 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/30 11:30:40 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	if (len <= 0)
		return (NULL);
	result = malloc(len * sizeof(char));
	while (i + start < len && s[i + start] != '\0')
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}
