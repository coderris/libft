/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:31:41 by lanton-m@st       #+#    #+#             */
/*   Updated: 2024/09/29 19:42:35 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	size_t	i;
	int		aux;

	aux = 0;
	i = 0;
	while (aux == 0 && i < n)
	{
		aux = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (aux);
}
