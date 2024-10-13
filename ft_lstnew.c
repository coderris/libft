/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:26:21 by lanton-m          #+#    #+#             */
/*   Updated: 2024/10/08 23:26:21 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *new_element;

    new_element = malloc(sizeof(t_list));
    if(!new_element)
        return(NULL);
    new_element->content = content;
    new_element->next = NULL;
    return (new_element);
}