/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:55:14 by lanton-m          #+#    #+#             */
/*   Updated: 2024/09/30 21:55:14 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char    *aux;
    int i;

    i = 0;
    if (ft_strlen(s1) > 16711568)
        return (NULL);
    aux = malloc(ft_strlen(s1) + 1);
    while(i < ft_strlen(s1) + 1)
    {
        aux[i] = s1[i];
        i++;
    }
    return (aux);
}