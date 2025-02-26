/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:23:51 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:37:31 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}

/*
void	ft_toupper_iter(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

int	main(void)
{
	char	*s;

	s = malloc(5);
	s[0] = 'h';
	s[1] = 'e';
	s[2] = 'l';
	s[3] = 'l';
	ft_striteri(s, ft_toupper_iter);
	write(1, s, 5);
	return (0);
}
*/