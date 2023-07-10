/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_betweenchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <gbertet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:44:53 by gbertet           #+#    #+#             */
/*   Updated: 2023/07/10 16:49:12 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_betweenchar(const char *s, int pos, char cquote)
{
	int		i;
	int		quote;
	char	c;

	i = -1;
	quote = 0;
	c = '\0';
	if ((int)ft_strlen(s) <= pos)
		return (0);
	while (s[++i])
	{
		if (i == pos)
			return (quote && s[i] != c && c == cquote);
		else if (!quote && (s[i] == '\'' || s[i] == '\"'))
		{
			quote = 1;
			c = s[i];
		}
		else if (quote && s[i] == c)
			quote = 0;
	}
	return (0);
}
