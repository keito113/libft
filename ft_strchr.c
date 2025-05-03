/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitabe <keitabe@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:04:16 by keitabe           #+#    #+#             */
/*   Updated: 2025/04/26 11:26:17 by keitabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;

	chr = (unsigned char)c;
	while (*s)
	{
		if (*s == chr)
			return ((char *)s);
		s++;
	}
	if (chr == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;

// 	str = "abcdefg";
// 	printf("before = %s\n\n", str);
// 	printf("test1 = %s\n", ft_strchr(str, 'c'));
// 	printf("test2 = %s\n", ft_strchr(str, 'a'));
// 	printf("test3 = %s\n", ft_strchr(str, 'g'));
// 	printf("test4 = %s\n", ft_strchr(str, 'x'));
// 	printf("test5 = %s\n", ft_strchr(str, '\0'));
// 	printf("test6 = %s\n", ft_strchr("", 'a'));
// 	printf("test7 = %s\n", ft_strchr("abacad", 'a'));
// 	return (0);
// }
