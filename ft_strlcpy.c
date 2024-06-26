/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:10:01 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/26 17:05:57 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;

	if (dstsize <= ft_strlen(dst))
	{
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = src[i];
	}
	return ft_strlen(dst);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[10] = "aida";
	char str2[] = "yooo";

	size_t result = ft_strlcpy(str1, str2, 6);
	printf("%zu\n", result);
	printf("%s\n", str1);
	
	// size_t res = strlcpy(str1, str2, 10);
	// printf("%zu\n", res);
	// printf("%s\n", str1);
}