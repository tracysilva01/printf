/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:25:49 by trsilva-          #+#    #+#             */
/*   Updated: 2025/03/06 18:20:19 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	convert_hex(int c, char format);

int	ft_print_ptr(void *ptr)
{
	int				count;
	unsigned long	address;
	char			result[16];
	int				i;

	if (ptr == NULL)
		return (ft_print_str("(nil)"));
	count = 0;
	i = 0;
	address = (unsigned long)ptr;
	count += ft_print_str("0x");
	if (address == 0)
		result[i++] = '0';
	while (address > 0)
	{
		result[i++] = convert_hex(address % 16, 'x');
		address /= 16;
	}
	while (--i >= 0)
		count += ft_print_char(result[i]);
	return (count);
}
