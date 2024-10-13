/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:43:20 by lanton-m          #+#    #+#             */
/*   Updated: 2024/10/08 23:43:20 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list  *aux;
    int i;

    aux = lst;
    i = 0;
    while (aux)
    {
        aux = aux->next;
        i++;
    }
    return (i);
}