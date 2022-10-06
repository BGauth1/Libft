/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:15:23 by gbertet           #+#    #+#             */
/*   Updated: 2022/10/05 00:56:52 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_size(int n)
{
	int	int_size;
	int	minus;

	int_size = 1;
	minus = 0;
	if (n < 0)
		minus = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		int_size++;
	}
	return (int_size + minus);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		int_size;

	int_size = ft_int_size(n);
	res = malloc((int_size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = '0';
	res[int_size] = '\0';
	if (n == -2147483648)
	{
		ft_strlcpy(res, "-2147483648", 12);
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		res[--int_size] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}
