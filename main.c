/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:30:17 by gbertet           #+#    #+#             */
/*   Updated: 2022/09/27 16:31:40 by gbertet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	(void)argv;
	char src[] = "ohhh le kk";
	char dest[100];
	ft_memmove(dest, src, 6);
	return (0);
}
