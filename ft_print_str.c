/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:44:26 by trsilva-          #+#    #+#             */
/*   Updated: 2025/03/05 23:53:39 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_str(char *string)
{
    int i;

    if (!string)
        return (ft_print_str("(null)"));
    i = 0;
    while (string[i])
        ft_print_char(string[i++]);
    return (i);
}
