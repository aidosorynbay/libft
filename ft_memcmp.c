/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:35:42 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/25 19:47:18 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *str1;
	char *str2;
	
	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;

	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] != str2[i])
		{
			return str1[i] - str2[i];
		}
		i++;
	}
	return 0;
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s1[] = "yooz";
// 	char s2[] = "yood";
// 	int a = ft_memcmp(s1, s2, 4);
// 	printf("%i", a);
// }