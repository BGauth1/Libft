/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:37:49 by gbertet           #+#    #+#             */
/*   Updated: 2022/10/05 00:11:34 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nb_word(const char *s, char c)
{
	int	nb_word;
	int	i;

	nb_word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nb_word++;
		i++;
	}
	return (nb_word);
}

int	ft_word_size(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

void	ft_tostr(char **res, char *buff, char c, int nb_word)
{
	int	i;
	int	j;
	int	word_size;

	i = 0;
	while (nb_word != i)
	{
		j = 0;
		while (*buff == c || *buff == '\0')
			buff++;
		word_size = ft_word_size(buff, c);
		res[i] = malloc((word_size + 1) * sizeof(char));
		while (j < word_size)
		{
			res[i][j++] = *buff++;
		}
		res[i][j] = '\0';
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	char	*buff;
	int		nb_word;

	buff = (char *)s;
	nb_word = ft_nb_word(s, c);
	res = malloc((nb_word + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res[nb_word] = NULL;
	ft_tostr(res, buff, c, nb_word);
	if (!res)
		return (NULL);
	return (res);
}
