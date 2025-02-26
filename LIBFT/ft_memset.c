/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:29:21 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/04 18:45:58 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		((char *)dest)[i] = c;
		++i;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char a[5];

	a[0] = 'h';
	a[1] = 'o';
	a[2] = 'l';
	a[3] = 'a';
	a[4] = '\0';

	ft_memset(a, 'c', 2);

	printf("%s\n", a);

	return (0);
}*/