/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:51:30 by trsilva-          #+#    #+#             */
/*   Updated: 2025/03/06 18:00:57 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsig(unsigned int n)
{
	int		count;
	char	result[10];
	int		i;

	if (n == 0)
		return (ft_print_char('0'));
	count = 0;
	i = 0;
	while (n > 0)
	{
		result[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		count += ft_print_char(result[--i]);
	return (count);
}
