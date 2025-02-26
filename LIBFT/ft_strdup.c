/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:31:56 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:33:07 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = s[i];
		++i;
	}
	new[i] = '\0';
	return (new);
}

/*
#include <stdio.h>

int	main(void)
{
	const char aber[15] = "buenos dias";
	char *a;

	a = ft_strdup(aber);
	printf("%s", a);
	free(a);
	return (0);
}*/