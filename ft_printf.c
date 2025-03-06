/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:01:09 by trsilva-          #+#    #+#             */
/*   Updated: 2025/03/06 19:01:57 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_specifier(char c, va_list arguments, int *chars_printed)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_print_char(va_arg(arguments, int));
	else if (c == 's')
		count = ft_print_str(va_arg(arguments, char *));
	else if (c == 'p')
		count = ft_print_ptr(va_arg(arguments, void *));
	else if (c == 'd' || c == 'i')
		count = ft_print_nbr(va_arg(arguments, int));
	else if (c == 'x' || c == 'X')
		count = ft_print_hex(va_arg(arguments, unsigned int), c);
	else if (c == 'u')
		count = ft_print_unsig(va_arg(arguments, unsigned int));
	else if (c == '%')
		count = ft_print_char('%');
	*chars_printed += count;
}

int	ft_printf(char const *man_arg, ...)
{
	va_list	arguments;
	int		i;
	int		chars_printed;

	va_start(arguments, man_arg);
	i = 0;
	chars_printed = 0;
	while (man_arg[i])
	{
		if (man_arg[i] == '%' && man_arg[i + 1])
		{
			format_specifier(man_arg[i + 1], arguments, &chars_printed);
			i += 2;
		}
		else
		{
			ft_print_char(man_arg[i++]);
			chars_printed++;
		}
	}
	va_end(arguments);
	return (chars_printed);
}
