/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yuhma <yuhma@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/27 18:07:01 by yuhma         #+#    #+#                 */
/*   Updated: 2026/03/27 18:08:27 by yuhma         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	cpylen;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	if (srclen > size - 1)
		cpylen = size - 1;
	else
		cpylen = srclen;
	ft_memcpy(dst, src, cpylen);
	dst[cpylen] = '\0';
	return (srclen);
}
