/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:58:45 by lanton-m          #+#    #+#             */
/*   Updated: 2024/10/08 23:58:45 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *aux;

    aux = ft_lslast(*lst);
    if (!aux)
        *lst = new;
    aux->next = new;
}