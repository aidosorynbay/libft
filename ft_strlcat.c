/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:45:58 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/25 19:47:15 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t result;
	int i;
	
	result = 0;
	i = 0;

	while (dst[i] != '\0')
	{
		result++;
		i++;
	}
	return result + dstsize;
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str1[] = "aid";
// 	char str2[] = "yooo";

// 	size_t result = ft_strlcat(str1, str2, 4);
// 	printf("%zu\n", result);
// 	size_t res = strlcat(str1, str2, 4);
// 	printf("%zu\n", res);
// }