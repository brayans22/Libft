/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:27:28 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/09/06 19:56:09 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_split_memory(char **split)
{
	unsigned int	i;

	i = 0;
	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**fill_split(char **dest_split, char **src_split, \
			char *sub,	unsigned int count_strings)
{
	unsigned int	i;

	i = 0;
	while (i < count_strings - 1)
	{
		dest_split[i] = ft_strdup(src_split[i]);
		if (!dest_split[i++])
		{
			free_split_memory(dest_split);
			free_split_memory(src_split);
			free(sub);
			return (NULL);
		}
	}
	free_split_memory(src_split);
	dest_split[i] = ft_strdup(sub);
	free(sub);
	if (!dest_split[i])
	{
		free_split_memory(dest_split);
		return (NULL);
	}
	dest_split[i + 1] = NULL;
	return (dest_split);
}

char	**get_new_split(char **old_split, char *sub, unsigned int count_strings)
{
	char	**new_split;

	if (!sub)
	{
		free_split_memory(old_split);
		return (NULL);
	}
	new_split = (char **) malloc(sizeof(char *) * (count_strings + 1));
	if (!new_split)
	{
		free_split_memory(old_split);
		free(sub);
		return (NULL);
	}
	return (fill_split(new_split, old_split, sub, count_strings));
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	char			*sub;
	unsigned int	start;
	unsigned int	i;
	unsigned int	count_strings;

	i = 0;
	count_strings = 0;
	split = (char **)malloc(sizeof(char *));
	while (s[i] && split)
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i - start > 0)
		{
			count_strings++;
			sub = ft_substr(s, start, i - start);
			split = get_new_split(split, sub, count_strings);
		}
	}
	return (split);
}
/*
*/
