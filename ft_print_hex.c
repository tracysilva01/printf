/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:54:35 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/28 00:03:37 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>
#include <stdlib.h>

int length_hex(int c)
{
    int i;

    i = 0;
    while (c/16 > 0)
    {
        c = c/16;
        ++i;
    }
    return (i+1);    
}

char    convert_hex(int c)
{
    return("0123456789ABCDEF"[c]);
}

int ft_print_hex(int c)
{
    int i;
    int len;
    char *result;

    len = length_hex(c);
    result = calloc(len + 1, sizeof(char));
    if (!result)
        return (0);
    while (len > 0)
    {
        result[--len] = convert_hex(c % 16);
        c /= 16;
    }
    i = 0;
    while (result[i])
        ft_print_char(result[i++]);
    free(result);
    return (i);
}
