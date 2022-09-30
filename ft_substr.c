/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:02:02 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/30 16:28:10 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > ft_strlen(s))
		len = 0;
	else if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i < len && s[i + start] != '\0')
	{
		result[i] = s[i + start];
		i++;
	}
	result[i] = '\0';
	return (result);
}
