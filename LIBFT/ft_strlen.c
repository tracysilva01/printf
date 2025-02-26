/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:58:51 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:34:18 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char    string[5];
	int     a;

	string[0] = 'j';
	string[1] = 'e';
	string[2] = 'j';
	string[3] = 'e';
	string[4] = '\0';

	a = ft_strlen(string);
	printf("%d", a);
	return (0);
}*/