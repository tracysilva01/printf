/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:45:31 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/04 19:06:14 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int fd = open("a.txt", O_WRONLY);
	ft_putstr_fd('a', fd);
	close(fd);
	return (0);
}*/