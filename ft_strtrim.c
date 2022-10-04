/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:48:57 by gbertet           #+#    #+#             */
/*   Updated: 2022/10/04 18:37:25 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_set(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	int		start_trim;
	int		end_trim;
	int		i;

	i = 0;
	start_trim = 0;
	end_trim = ft_strlen(s1);
	while (ft_check_set(s1[start_trim], set) == 1 && start_trim < end_trim - 1)
		start_trim++;
	while (ft_check_set(s1[end_trim - 1], set) == 1
		&& start_trim < end_trim - 1)
		end_trim--;
	if (start_trim == end_trim - 1 && ft_check_set(s1[start_trim], set) == 1)
		start_trim = end_trim;
	res = malloc((end_trim - start_trim + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (start_trim < end_trim)
	{
		res[i++] = s1[start_trim++];
	}
	res[i] = '\0';
	return (res);
}
