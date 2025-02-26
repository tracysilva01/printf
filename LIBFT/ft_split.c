/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:56:16 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/03 17:50:18 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_strings(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			++count;
			while (s[i] && (s[i] != c))
				++i;
		}
		else
			++i;
	}
	return (count);
}

char	*fill_words(char const *s, char c, int *last_end)
{
	char	*word;
	int		start;
	int		end;
	int		i;

	while (s[*last_end] && s[*last_end] == c)
		(*last_end)++;
	start = *last_end;
	while (s[*last_end] && s[*last_end] != c)
		(*last_end)++;
	end = *last_end;
	word = ft_calloc(end - start + 1, sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	return (word);
}

void	my_free(char **string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		free(string[i]);
		++i;
	}
	free(string);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	char	*word;
	int		last_end;

	last_end = 0;
	if (!s)
		return (NULL);
	strings = ft_calloc(count_strings(s, c) + 1, sizeof(char *));
	if (!strings)
		return (NULL);
	i = 0;
	while (i < count_strings(s, c))
	{
		word = fill_words(s, c, &last_end);
		if (!word)
		{
			my_free(strings);
			return (NULL);
		}
		strings[i++] = word;
	}
	strings[i] = NULL;
	return (strings);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	char **strings = ft_split("hello!zzzzzzzz", 'z');

	for (int i = 0; strings[i] != NULL; i++) {
		printf("Palabra %d: '%s'\n", i, strings[i]);
		free(strings[i]); 
	}

	free(strings); 
	return (0);
}
*/