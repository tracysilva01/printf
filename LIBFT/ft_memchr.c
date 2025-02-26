/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:15:29 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/04 18:06:53 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)ptr)[i] == (unsigned char)ch)
		{
			return ((void *)((unsigned char *)ptr + i));
		}
		++i;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char    string[15] = "buenas tardes";
	int     ch = 'e';
	int     n = 5;
	char    *a;

	a = ft_memchr(string, ch, n);
	printf("%s", a);
	return(0);
}
*/