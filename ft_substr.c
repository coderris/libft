/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:03:00 by lanton-m          #+#    #+#             */
/*   Updated: 2024/10/06 19:03:15 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *aux;
    char    *text;
    size_t  i;

    i = 0;
    text = (char *)s;
    aux = malloc(len + 1);
    if (!aux || ft_strlen(text) < len)
        return(NULL);
    while (i < len)
    {
        aux[i] = text[start + i];
        i++;
    }
    aux[i] = '\0';
    return (aux);
}
