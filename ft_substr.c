/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:42:03 by lanton-m          #+#    #+#             */
/*   Updated: 2024/09/30 22:42:03 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

int main(void)
{
    char const s[] = "hola me llamo luis y me encanta los chochitos";
    
    printf("%s", ft_substr(s,0,4));
    return (0);
}