/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yuhma <yuhma@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/27 18:06:11 by yuhma         #+#    #+#                 */
/*   Updated: 2026/03/27 18:06:57 by yuhma         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	char	*dstend;

	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	dstend = dst + dstsize;
	if (size <= dstsize)
		return (size + srcsize);
	else
	{
		while (size - dstsize - 1 > 0 && *src)
		{
			*dstend++ = *src++;
			size--;
		}
		*dstend = '\0';
		return (dstsize + srcsize);
	}
}
