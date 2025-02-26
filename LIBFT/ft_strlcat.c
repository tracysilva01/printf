/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:27:34 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:33:58 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	j = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (((dst_len + j) < (size - 1)) && (src[j]))
	{
		dst[i] = src[j];
		++i;
		++j;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	const char	*s1;
	char		*dup;
	size_t		size;

	s1 = "rrrrrrrrrrrrrrr";
	dup = malloc(1024);
	size = ft_strlcat(dup, s1, 5);
	write(1, dup, 12);
	write(1, "\n", 1);
	write(1, &"0123456789"[(int)size], 1);
	free(dup);
	return (0);
}*/