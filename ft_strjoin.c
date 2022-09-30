/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:41:26 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/30 16:31:02 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		i;
	size_t		len;
	char		*result;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		result[i] = s1[i];
		i++;
	}
	while (i - ft_strlen(s1) < ft_strlen(s2))
	{
		result[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	result[i] = '\0';
	return (result);
}
