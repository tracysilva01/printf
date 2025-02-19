/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:44:26 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/19 21:00:33 by trsilva-         ###   ########.fr       */
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
        write(1, &string[i++], 1);
    write(1, "\n", 1);
    return (i);
}