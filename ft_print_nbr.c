/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:47:17 by trsilva-          #+#    #+#             */
/*   Updated: 2025/03/06 18:00:45 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int c)
{
	char *str_nbr;
	int length;

	str_nbr = ft_itoa(c);
	if (!str_nbr)
		return (0);

	length = ft_strlen(str_nbr);

	write(1, str_nbr, length);

	free(str_nbr);
	return (length);
}