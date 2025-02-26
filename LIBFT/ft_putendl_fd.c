/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:44:35 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/04 18:53:32 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int fd = open("a.txt", O_WRONLY);
	ft_putendl_fd('a', fd);
	close(fd);
	return (0);
}*/