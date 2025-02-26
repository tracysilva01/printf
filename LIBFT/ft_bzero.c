/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:09:29 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:37:10 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *dest, size_t num)
{
	unsigned int	i;

	i = 0;
	while (i < num)
	{
		((char *)dest)[i] = '\0';
		++i;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	a[5];

	a[0] = 'h';
	a[1] = 'o';
	a[2] = 'l';
	a[3] = 'a';
	a[4] = '\0';
	ft_bzero(a, 2);
	printf("%s\n", a);
	return (0);
}
*/