/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:01:52 by lanton-m@st       #+#    #+#             */
/*   Updated: 2024/10/27 18:48:23 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*finder(const char *str)
{
	if ((*str >= '\x00' && *str <= '\x08') || (*str >= '\x0E'
			&& *str <= '\x1F'))
		return (0);
	while ((*str >= 8 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
	{
		str++;
		if (*str == '+' || *str == '-')
			return (0);
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	if (finder(str) == NULL)
		return (0);
	else
		str = finder(str);
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
