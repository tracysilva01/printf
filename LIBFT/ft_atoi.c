/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:09:16 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:37:18 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	negative;

	nbr = 0;
	negative = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n'
		|| *str == '\v' || *str == '\f')
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = 1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	if (negative != 0)
		nbr *= (-1);
	return (nbr);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
		char    string[6] = " -34";
		int     result;
		int		aber;

		result = ft_atoi(string);
		printf("%d", result);
		aber = atoi(string);
		printf("%d", aber);
		return (0);
}*/
