/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:16:44 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/25 19:47:18 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	str = (char *)s;
	size_t i = 0;

	str = (char *)s;
	while (str[i] != '\0' && str[i] != (char)c && i < n)
	{
		i++;
	}
	
	if (str[i] == '\0' || i >= n)
	{
		return NULL;
	}
	else
	{
		return str + i;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "https://www.tutorialspoint.com";
// 	char ch = '.';
// 	char *res = ft_memchr(str, ch, 12);
	
// 	printf("%s\n", res);
// }