/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:20:20 by lanton-m          #+#    #+#             */
/*   Updated: 2024/10/05 21:20:20 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  ft_counter(char const *s, char c)
{
    size_t  i;
    size_t  counter;
    char    *s_c;

    s_c = (char *)s;
    i = 0;
    counter = 1;
    while (*s_c)
    {
        if (*s_c == c)
            counter++;
        s_c++;
    }
    return (counter);
}
size_t  ft_len_of_str(char const *s, char c)
{
    char    *str;
    size_t  i;

    i = 0;
    str = (char *)s;
    while(str[i] != c)
    {
        i++;
    }
    return (i);
}
char **ft_split(char const *s, char c)
{
    char    **str;

    if (!s)
        return (NULL);
    str = malloc(ft_counter(s,c) + 1);
    

}