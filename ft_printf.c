/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:01:09 by trsilva-          #+#    #+#             */
/*   Updated: 2025/03/05 23:56:08 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    format_specifier(char c, va_list arguments)
{
    if (c == 'c')
        ft_print_char(va_arg(arguments, int));
    else if (c == 's')
        ft_print_str(va_arg(arguments, char *));
    else if (c == 'p')
        ft_print_ptr(va_arg(arguments, void *));
    else if (c == 'd' || c == 'i')
        ft_print_nbr(va_arg(arguments, int));
    else if (c == 'x' || c == 'X')
        ft_print_hex(va_arg(arguments, int), c);
    else if (c == 'u')
        ft_print_unsig(va_arg(arguments, unsigned int));
    else if (c == '%')
        ft_print_char('%');
}

int ft_printf(char const *man_arg, ...)
{
    va_list arguments;
    int i;
    int chars_printed;
    
    va_start(arguments, man_arg);
    i = 0;
    chars_printed = 0;
    while (man_arg[i])
    {
        if (man_arg[i] == '%' && man_arg[i+1])
        {
            format_specifier(man_arg[i+1], arguments);
            i += 2;
        }
        else
            ft_print_char(man_arg[i++]);
    }
    va_end(arguments);
    return(chars_printed);
}

int main(void)
{
    ft_printf("holaa %c", 'x');
    return (0);
}