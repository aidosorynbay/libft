/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:35:07 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/26 16:20:31 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			((char*)dst)[i] = ((char*)src)[i];
			i++;	
		}
	}
	else
	{
		i = len - 1;
		while (i > 0 && len > 0)
		{
			((char*)dst)[i] = ((char*)src)[i];
			i--;
			len--;
		}
		((char*)dst)[i] = ((char*)src)[i];
	}
	return dst;
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[] = "Geerw";
    char str2[] = "Fulks";

	ft_memmove(str1, str2, 5);
	printf("%s\n", str1);
	
	char strr1[] = "Geerw";
    char strr2[] = "Fulks";

	memmove(strr1, strr2, 5);
	printf("%s\n", strr1);
}
