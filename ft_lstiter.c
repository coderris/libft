/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:25:54 by lanton-m          #+#    #+#             */
/*   Updated: 2024/10/10 12:25:54 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *aux;

    aux = lst;
    while (aux)
    {
        f(aux->content);
        aux = aux->next;
    }
}