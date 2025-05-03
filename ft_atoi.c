/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitabe <keitabe@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:03:44 by keitabe           #+#    #+#             */
/*   Updated: 2025/04/26 16:55:04 by keitabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && '9' >= *str)
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	return (i * sign);
}

// #include <stdio.h>

// int	main(int ac, char *av[])
// {
// 	if (ac != 2)
// 	{
// 		printf("\n");
// 		return (0);
// 	}
// 	printf("ft_atoi = %d\n", ft_atoi(av[1]));
// 	printf("atoi = %d\n", atoi(av[1]));
// 	return (0);
// }
