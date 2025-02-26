/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:51:27 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:34:40 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		++i;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		--i;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)s + i);
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char    string[20] = "there is so \0ma\0ny\0\0\0";
	int     ch = '\0';
	int     n = 5;
	char    *a;
	char	*b;

	a = ft_strrchr(string, ch);
	b = strrchr(string, ch);
	printf("%s", a);
	printf("%s", b);
	return(0);
}*/