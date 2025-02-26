/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:27:26 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:33:02 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		++i;
	}
	if ((char)c == '\0')
	{
		return ((char *)s + i);
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char    string[15] = "buenas tardes";
	int     ch = 'i';
	int     n = 5;
	char    *a;
	char    *b;

	a = ft_strchr(string, ch);
	b = strchr(string, ch);
	printf("%s", a);
	printf("%s", a);
	return(0);
}*/