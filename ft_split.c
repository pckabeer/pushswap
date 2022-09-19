/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanikka <kpanikka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 08:00:21 by kpanikka          #+#    #+#             */
/*   Updated: 2022/09/19 21:19:32 by kpanikka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		count++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static char	*ft_strndup(char const *s, int len)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc(sizeof (char) * (len + 1));
	while (i < len)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
static void	ft_free(char *s, int i)
{
	if (!s)
	{
		while (i-- != 0)
			free(s[i]);
		free(s);
	}
}*/

int	*ft_split(char *s, int	*word_count)
{
	int		word_len;
	int		*result;
	int		counter;

	counter = 0;
	if (!s)
		return (0);
	*word_count = ft_word_count(s, ' ');
	result = (int *)malloc(sizeof (int *) * (*word_count));
	if (result == NULL)
		return (0);
	while (counter < *word_count)
	{
		while (*s && *s == ' ')
			s++;
		word_len = ft_word_len(s, ' ');
		result[counter] = ft_atoi(ft_strndup(s, word_len));
		//free(result[counter]);
		s = s + word_len;
		counter++;
	}
	//result[*word_count] = 0;
	return (result);
}
