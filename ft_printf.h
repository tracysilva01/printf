/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:28:47 by trsilva-          #+#    #+#             */
/*   Updated: 2025/03/06 00:04:43 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "LIBFT/libft.h"
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(char const *str, ...);
int		ft_print_char(int c);
int     ft_print_nbr(int c);
int     ft_print_str(char *string);
int     ft_print_hex(int c, char format);
int     ft_print_ptr(void *ptr);
int     ft_print_unsig(unsigned int n);

#endif