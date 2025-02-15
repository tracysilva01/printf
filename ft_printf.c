/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:01:09 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/15 01:18:24 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void    format_specifier(char c, va_list arguments)
{
    if (c == 'c')
    {
        putchar(va_arg(arguments, int));
    }
    else if (c == 's')
    {
        putstring(va_arg(arguments, char *));
    }
    else if (c == 'p')
    {
        putpointer(va_arg(arguments, void *));
    }
    else if (c == 'd' || c == 'i')
    {
        putnumber(va_arg(arguments, int));
    }
    else if (c == 'u' || c = 'x' || c = 'X')
    {
        putnumber(va_arg(arguments, unsigned int));
    }
    else if (c == '%')
    {
        putchar('%');
    }
}

int ft_printf(char const *man_arg, ...)
{
    va_list arguments;
    int i;
    
    va_start(arguments, man_arg);
    i = 0;
    while (man_arg[i])
    {
        if (man_arg[i] == '%' && man_arg[i+1])
        {
            if (man_arg[i+1] == 'c' || man_arg[i+1] == 's' ||
                    man_arg[i+1] == 'p' || man_arg[i+1] == 'd'
                    || man_arg[i+1] == 'i' || man_arg[i+1] == 'u'
                    || man_arg[i+1] == 'x' || man_arg[i+1] == 'X'
                    || man_arg[i+1] == '%')
                     {
                        format_specifier(man_arg[i+1], arguments);
                        i += 2;
                     }
            else
                putchar(man_arg[i++]);
        }
        else
            putchar(man_arg[i++]);
    }
    va_end(arguments);
    return(i);
}
