/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yuhma <yuhma@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/27 17:01:19 by yuhma         #+#    #+#                 */
/*   Updated: 2026/03/27 17:13:26 by yuhma         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(long n)
{
	int	d;

	d = 1;
	while (n >= 10)
	{
		d++;
		n /= 10;
	}
	return (d);
}

static void	convert(char **s, int len, int sign, long num)
{
	(*s)[len] = '\0';
	while (len--)
	{
		(*s)[len] = (num % 10) + '0';
		num /= 10;
	}
	if (sign == -1)
		(*s)[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		sign;
	long	num;

	num = n;
	sign = 1;
	if (num < 0)
	{
		num *= -1;
		len = digits(num) + 1;
		sign = -1;
	}
	else
	{
		len = digits(num);
	}
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	convert(&s, len, sign, num);
	return (s);
}
