/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yuhma <yuhma@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/27 18:03:53 by yuhma         #+#    #+#                 */
/*   Updated: 2026/03/27 18:04:19 by yuhma         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static int	wordlen(char const *s, char c)
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

static void	freeall(char **res, int i)
{
	while (i > 0)
		free(res[--i]);
	free(res);
}

static int	fillword(char const **s, char **res, char c, int i)
{
	int	len;
	int	j;

	len = wordlen(*s, c);
	res[i] = malloc(len + 1);
	if (!res[i])
		return (0);
	j = 0;
	while (j < len)
	{
		res[i][j++] = *(*s)++;
	}
	res[i][j] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!fillword(&s, res, c, i))
				return (freeall(res, i), NULL);
			i++;
		}
	}
	res[i] = NULL;
	return (res);
}
