/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:47:20 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:31:57 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		++i;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char data1[] = "teste";
	char data2[] = "teste";
	int result;
	int result2;

	result = ft_memcmp(data1, data2, 1);
	result2 = memcmp(data1, data2, 1);
	printf("mi función es: %d", result);
	printf("la normal %d", result2);
	return (0);
}*/