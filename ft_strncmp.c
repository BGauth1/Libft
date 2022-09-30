/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:23:43 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/30 16:52:26 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*buff_s1;
	unsigned char	*buff_s2;

	i = 0;
	buff_s1 = (unsigned char *)s1;
	buff_s2 = (unsigned char *)s2;
	if (n == 0 || !s1 || !s2)
		return (0);
	while (i < n - 1 && buff_s1[i] != '\0' && buff_s2[i] != '\0'
		&& buff_s1[i] == buff_s2[i])
		i++;
	return (buff_s1[i] - buff_s2[i]);
}
