/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:36:47 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:34:28 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		++i;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int result;
	int result2;

	result = ft_strncmp("abcdefgh", "abcdwxyz", 5);
	result2 = strncmp("abcdefgh", "abcdwxyz", 5);
	printf("mi función es: %d", result);
	printf("la normal %d", result2);
	return (0);
}*/