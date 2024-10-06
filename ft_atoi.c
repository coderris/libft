/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:01:52 by lanton-m@st       #+#    #+#             */
/*   Updated: 2024/10/06 20:41:11 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	if (!*str)
		return (0);
	while ((*str >= 8 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
	{
		str++;
		if (*str == '+' || *str == '-')
			return (0);
	}
	if (*str == '-')
	{
		sign = (-1) * sign;
		str++;
	}
	while (*str < '0' && *str > '9')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
