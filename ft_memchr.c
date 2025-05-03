/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitabe <keitabe@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:51:57 by keitabe           #+#    #+#             */
/*   Updated: 2025/05/03 10:54:43 by keitabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	chr;
	size_t			i;

	ptr = (unsigned char *)buf;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == chr)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

// #include "libft.h"
// #include <stdio.h>
// #include <string.h>

// void	print_result(const char *label, void *std, void *ft, const void *base)
// {
// 	printf("%s\n", label);
// 	if (std)
// 		printf("  memchr   : found at offset %ld\n", (long)((unsigned char *)std
// 				- (unsigned char *)base));
// 	else
// 		printf("  memchr   : Not found\n");
// 	if (ft)
// 		printf("  ft_memchr: found at offset %ld\n", (long)((unsigned char *)ft
// 				- (unsigned char *)base));
// 	else
// 		printf("  ft_memchr: Not found\n");
// 	printf("\n");
// }

// int	main(void)
// {
// 	char			buf1[] = "Hello";
// 	char			buf2[] = "he\0lo";
// 	unsigned char	bin[] = {0x01, 0x02, 0x03, 0x04};
// 	void			*null_ptr;

// 	null_ptr = NULL;
// 	print_result("test1: search 'e' in \"Hello\"", memchr(buf1, 'e', 5),
// 		ft_memchr(buf1, 'e', 5), buf1);
// 	print_result("test2: search 'z' in \"Hello\"", memchr(buf1, 'z', 5),
// 		ft_memchr(buf1, 'z', 5), buf1);
// 	print_result("test3: search 'o' in \"Hello\"", memchr(buf1, 'o', 5),
// 		ft_memchr(buf1, 'o', 5), buf1);
// 	print_result("test4: search '\\0' in \"he\\0lo\"", memchr(buf2, '\0', 5),
// 		ft_memchr(buf2, '\0', 5), buf2);
// 	print_result("test5: search '\\0' in \"Hello\"", memchr(buf1, '\0', 5),
// 		ft_memchr(buf1, '\0', 5), buf1);
// 	print_result("test6: search 'h' with n=0", memchr(buf1, 'h', 0),
// 		ft_memchr(buf1, 'h', 0), buf1);
// 	print_result("test7: search 'l' from buf + 2", memchr(buf1 + 2, 'l', 3),
// 		ft_memchr(buf1 + 2, 'l', 3), buf1 + 2);
// 	print_result("test8: NULL pointer with n=0", memchr(null_ptr, 'a',
// 			(size_t)0), ft_memchr(null_ptr, 'a', (size_t)0), NULL);
// 	print_result("test9: search 0x03 in binary", memchr(bin, 0x03, 4),
// 		ft_memchr(bin, 0x03, 4), bin);
// 	return (0);
// }
