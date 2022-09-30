/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:30:44 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/29 17:34:38 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;

	res = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	ft_strlcpy(res, s, ft_strlen(s) + 1);
	return (res);
}
