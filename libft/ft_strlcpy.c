/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdi-pint <pdi-pint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:24:47 by pdi-pint          #+#    #+#             */
/*   Updated: 2024/02/26 15:38:18 by pdi-pint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src && src[res])
		res++;
	if (size < 1)
		return (res);
	while (src && src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	char dest[] = "ciao ciao";
	char src[] = "ciao";
	unsigned int size = 18;
	printf("%d\n", ft_strlcpy(dest, src, size));
	return (0);
}*/
