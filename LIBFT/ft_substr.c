/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:48:26 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/04 19:04:21 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;
	unsigned int	j;

	if (!s || start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
	{
		substring[j] = s[i];
		++i;
		++j;
	}
	substring[j] = '\0';
	return (substring);
}

/*
#include <stdio.h>

int	main(void)
{
	char            *sub_s;

	sub_s = ft_substr("hola", 0, 18446744073709551615);
	printf("%s", sub_s);
	free(sub_s);
	return (0);
}*/