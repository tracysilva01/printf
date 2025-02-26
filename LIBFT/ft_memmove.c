/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:15:40 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/04 18:26:50 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!dest && !src)
		return (0);
	if ((unsigned char *)dest < (unsigned char *)src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			++i;
		}
	}
	if ((unsigned char *)dest > (unsigned char *)src)
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
			--i;
		}
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char    string[15] = "buenas tardes";
	char    string2[5] = "hola";
	int     n = 3;

	ft_memmove(string, string2, 6);
	printf("%s", string);
	return(0);
}*/