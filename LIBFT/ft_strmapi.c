/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:43:40 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:37:36 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstring;

	newstring = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!newstring)
		return (0);
	if (!s || !f)
		return (0);
	i = 0;
	while (s[i])
	{
		newstring[i] = f(i, s[i]);
		++i;
	}
	newstring[i] = '\0';
	return (newstring);
}

/*
void	ft_toupper_iter(unsigned int i, char c)
{
	(void)i;
	c = ft_toupper(c);
}

int	main(void)
{
	char const	*s;
	char		*upper_str;

	s = "hello";
	upper_str = ft_strmapi(s, ft_toupper_iter);
	write(1, upper_str, 5);
	return (0);
}
*/