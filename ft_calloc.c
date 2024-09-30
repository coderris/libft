/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:30:13 by lanton-m@st       #+#    #+#             */
/*   Updated: 2024/09/29 20:51:37 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*aux;
	size_t	space;
	int	i;

	i = 0;
	space = nmemb * size;
	if (nmemb == 0 && size == 0)
		space = 1;
	aux = malloc(space);
	while (aux[i] != '\0')
	{
		aux[i] = 0;
		i++;
	}
	return (aux);
}