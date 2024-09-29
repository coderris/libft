/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:58:20 by lanton-m@st       #+#    #+#             */
/*   Updated: 2024/09/28 20:52:47 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*array;
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)&c;
	array = (unsigned char *)s;
	if (!array)
		return (0);
	else
	{
		while (*array && i < n)
		{
			if (*array == *a)
				return ((void *)array);
			else
			{
				array++;
				i++;
			}
		}
	}
	return (0);
}
