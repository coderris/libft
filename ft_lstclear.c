/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:11:33 by lanton-m          #+#    #+#             */
/*   Updated: 2024/10/10 12:11:33 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *aux;

    while (*lst)
    {
        aux = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = aux;
    }
    free (*lst);
    *lst = NULL;
}