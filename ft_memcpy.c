/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:52:06 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/26 16:16:12 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return dst;
}


// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str1[] = "Geerw";
//     char str2[] = "Fulks";

// 	ft_memcpy(str1, str2, 5);
// 	printf("%s\n", str1);
	
// 	char strr1[] = "Geerw";
//     char strr2[] = "Fulks";

// 	ft_memcpy(strr1, strr2, 5);
// 	printf("%s\n", strr1);
// }