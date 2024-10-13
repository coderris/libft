/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:51:17 by lanton-m          #+#    #+#             */
/*   Updated: 2024/10/08 23:51:17 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list  *aux;

    aux = lst;
    while (aux->next)
        aux = aux->next;
    return (aux);
}