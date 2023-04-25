/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otuyishi <otuyishi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:37:30 by otuyishi          #+#    #+#             */
/*   Updated: 2023/04/17 22:31:41 by otuyishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words_delimited(char const *str, char c)
{
	size_t	count;
	size_t	iter;

	count = 0;
	iter = 0;
	while (str[iter] != '\0')
	{
		if (str[iter] != c)
		{
			count++;
			while (str[iter] && str[iter] != c)
				iter++;
			if (str[iter] == '\0')
				return (count);
		}
		iter++;
	}
	return (count);
}

static void	free_all(char **word)
{
	int	i;

	i = 0;
	while (word[i])
	{
		free(word[i]);
		i++;
	}
	free(word);
}

static int	split_loop(char const *s, char c, char **word)
{
	int	len;
	int	iter;

	iter = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			word[iter] = ft_substr(s - len, 0, len);
			if (!word[iter])
			{
				free_all(word);
				return (0);
			}
			iter++;
			if (*s == '\0')
				break ;
		}
		++s;
	}
	word[iter] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**word;
	int		result;

	if (!s)
		return (NULL);
	word = (char **) malloc(sizeof(char *)
			* (ft_count_words_delimited(s, c) + 1));
	if (word == NULL)
		return (0);
	result = split_loop(s, c, word);
	if (result == 0)
		return (NULL);
	return (word);
}
