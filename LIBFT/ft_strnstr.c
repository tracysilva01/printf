/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 11:14:12 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:34:36 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!*little)
		return ((char *)big);
	if (len < 1)
		return (0);
	while (i < len && big[i])
	{
		if (big[i] == little[0] && len - i >= ft_strlen(little))
		{
			if (ft_strncmp(&big[i], little, ft_strlen(little)) == 0)
				return ((char *)&big[i]);
		}
		++i;
	}
	return (0);
}

/*
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char *sub_s;

	sub_s = ft_strnstr("aaxx", "xx", 3);
	printf("%s", sub_s);
	return (0);
}*/