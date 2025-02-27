/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:44:26 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/23 22:58:21 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_print_str(char *string)
{
    int i;

    if (!string)
        return (0);

    i = 0;
    while (string[i])
        ft_print_char(1, &string[i++]);
    return (i);
}