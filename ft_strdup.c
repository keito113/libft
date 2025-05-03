/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitabe <keitabe@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:33:55 by keitabe           #+#    #+#             */
/*   Updated: 2025/05/01 16:09:09 by keitabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*cpy;

	len = 0;
	while (s1[len])
		len++;
	cpy = malloc(len + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*src;
// 	char	*dest;

// 	src = "Hello";
// 	dest = ft_strdup(src);
// 	printf("copy_str = %s\n", dest);
// 	free(dest);
// 	return (0);
// }
