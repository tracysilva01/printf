/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:45:59 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:33:38 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	newstring = malloc(sizeof(char) * (len + 1));
	if (!s1 || !s2 || !newstring)
		return (NULL);
	while (s1[i])
	{
		newstring[i] = s1[i];
		++i;
	}
	while (s2[j])
	{
		newstring[i] = s2[j];
		++i;
		++j;
	}
	newstring[i] = '\0';
	return (newstring);
}

/*
int	main(void)
{
	const char  *s1;
	const char  *s2;
	char        *dup;

	s1 = "buenas ";
	s2 = "tardes";
	dup = ft_strjoin(s1, s2);
	write(1, dup, 16);
	return (0);
}*/