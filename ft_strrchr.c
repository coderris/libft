/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 23:14:22 by lanton-m@st       #+#    #+#             */
/*   Updated: 2024/09/29 19:27:58 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_c;
	char	c_c;
	char	*holder;

	s_c = (char *)s;
	c_c = (char)c;
	if (!s_c)
		return (0);
	while (*s_c)
	{
		if (*s_c == c_c)
			holder = s_c;
		s_c++;
	}
	if (*holder)
		return (holder);
	else if (!c_c)
		return (s_c);
	return (NULL);
}
