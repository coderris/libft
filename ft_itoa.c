/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanton-m <lanton-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:40:15 by lanton-m          #+#    #+#             */
/*   Updated: 2024/10/06 20:41:59 by lanton-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_size(int n)
{
	size_t	counter;

	counter = 0;
	while (n > 0)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	size_t	size;
	size_t	total_size;
	size_t	sign;
	size_t	special;
	char	*number;

	sign = 0;
	special = 0;
	if (n > 2147483647 || n < (-2147483647 - 1))
		return (NULL);
	if (n < 0)
	{
		sign = 1;
		n = -n;
		if (n == -2147483648)
		{
			n = 2147483647;
			special = 1;
		}
	}
	if (n == 0)
	{
		number = malloc(2);
		if (!number)
			return (NULL);
		number[0] = '0';
		number[1] = '\0';
		return (number);
	}
	size = ft_size(n);
	number = malloc(size + sign + 1);
	if (!number)
		return (NULL);
	if (sign == 1)
		number[0] = '-';
	total_size = size + sign;
	while (n != 0 || (sign == 1 && n != 0))
	{
		total_size--;
		number[total_size] = n % 10 + '0';
		n = n / 10;
	}
	number[size + sign] = '\0';
	if (special == 1)
		number[size + sign - 1]++;
	return (number);
}
