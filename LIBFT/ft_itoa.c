/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:36:26 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/04 18:06:27 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lencount(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		++len;
	}
	return (len);
}

void	ft_writestr(char *str, int n, int len)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[len - i - 1] = ((n % 10) + '0');
		n = (n / 10);
		++i;
	}
}

char	*ft_itoa(int n)
{
	char	*string;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_lencount(n);
	if (n < 0)
		len = len + 1;
	string = malloc((len + 1) * sizeof(char));
	if (!string)
		return (0);
	ft_writestr(string, n, len);
	string[len] = '\0';
	return (string);
}

/*
#include <stdio.h>

int	main(void)
{
	char *result;

	result = ft_itoa(-5464);
	printf("%s", result);
	free(result);
	return (0);
}
*/