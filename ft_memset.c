/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitabe <keitabe@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:01:35 by keitabe           #+#    #+#             */
/*   Updated: 2025/05/02 14:37:33 by keitabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	chr;
	size_t			i;

	ptr = (unsigned char *)buf;
	chr = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ptr[i] = chr;
		i++;
	}
	return (buf);
}

// #include <stdio.h>
// #include <string.h>

// void	print_result(char *label, unsigned char *buf1, unsigned char *buf2,
// 		size_t n)
// {
// 	size_t	i;

// 	printf("%s(ft)  = ", label);
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (buf1[i] >= 32 && buf1[i] <= 126)
// 			printf("%c", buf1[i]);
// 		else
// 			printf("\\x%02x", buf1[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("%s(std) = ", label);
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (buf2[i] >= 32 && buf2[i] <= 126)
// 			printf("%c", buf2[i]);
// 		else
// 			printf("\\x%02x", buf2[i]);
// 		i++;
// 	}
// 	printf("\n\n");
// }

// int	main(void)
// {
// 	char	buf1[20], buf2[20];
// 	int		nums1[4], nums2[4];

// 	strcpy(buf1, "Hello");
// 	strcpy(buf2, "Hello");
// 	ft_memset(buf1 + 2, '*', 3);
// 	memset(buf2 + 2, '*', 3);
// 	print_result("test1", (unsigned char *)buf1, (unsigned char *)buf2, 5);
// 	strcpy(buf1, "World");
// 	strcpy(buf2, "World");
// 	ft_memset(buf1, '#', 5);
// 	memset(buf2, '#', 5);
// 	print_result("test2", (unsigned char *)buf1, (unsigned char *)buf2, 5);
// 	strcpy(buf1, "Test");
// 	strcpy(buf2, "Test");
// 	ft_memset(buf1, 'X', 0);
// 	memset(buf2, 'X', (size_t)0);
// 	print_result("test3", (unsigned char *)buf1, (unsigned char *)buf2, 4);
// 	strcpy(buf1, "");
// 	strcpy(buf2, "");
// 	ft_memset(buf1, 'A', 0);
// 	memset(buf2, 'A', (size_t)0);
// 	print_result("test4", (unsigned char *)buf1, (unsigned char *)buf2, 1);
// 	strcpy(buf1, "AB\0CD");
// 	strcpy(buf2, "AB\0CD");
// 	ft_memset(buf1, '*', 5);
// 	memset(buf2, '*', 5);
// 	print_result("test5", (unsigned char *)buf1, (unsigned char *)buf2, 5);
// 	strcpy(buf1, "ABC");
// 	strcpy(buf2, "ABC");
// 	ft_memset(buf1, 0, 3);
// 	memset(buf2, 0, 3);
// 	print_result("test6", (unsigned char *)buf1, (unsigned char *)buf2, 3);
// 	strcpy(buf1, "XYZXYZ");
// 	strcpy(buf2, "XYZXYZ");
// 	ft_memset(buf1, 255, 6);
// 	memset(buf2, 255, 6);
// 	print_result("test7", (unsigned char *)buf1, (unsigned char *)buf2, 6);
// 	memcpy(nums1, (int[]){1, 2, 3, 4}, sizeof(nums1));
// 	memcpy(nums2, (int[]){1, 2, 3, 4}, sizeof(nums2));
// 	ft_memset(nums1, 1, sizeof(nums1));
// 	memset(nums2, 1, sizeof(nums2));
// 	print_result("test8", (unsigned char *)nums1, (unsigned char *)nums2,
// 		sizeof(nums1));
// 	strcpy(buf1, "1234567890");
// 	strcpy(buf2, "1234567890");
// 	ft_memset(buf1, '9', sizeof(buf1));
// 	memset(buf2, '9', sizeof(buf2));
// 	print_result("test9", (unsigned char *)buf1, (unsigned char *)buf2,
// 		sizeof(buf1));
// 	strcpy(buf1, "ABCDEFGH");
// 	strcpy(buf2, "ABCDEFGH");
// 	ft_memset(buf1 + 1, 'x', 4);
// 	memset(buf2 + 1, 'x', 4);
// 	print_result("test10", (unsigned char *)buf1, (unsigned char *)buf2, 8);
// 	return (0);
// }
