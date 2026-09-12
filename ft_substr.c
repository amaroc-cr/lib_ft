/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yuhma <yuhma@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/27 18:10:15 by yuhma         #+#    #+#                 */
/*   Updated: 2026/03/27 18:10:42 by yuhma         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	avlen;
	size_t	srclen;

	srclen = ft_strlen(s);
	if (start >= (unsigned int)srclen)
		len = 0;
	avlen = srclen - start;
	if (len > avlen)
		len = avlen;
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s + start, len);
	p[len] = '\0';
	return (p);
}
