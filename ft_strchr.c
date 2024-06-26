/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:58:26 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/25 19:47:17 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char *str;
	int i = 0;

	str = (char *)s;
	while (s[i] != '\0' && s[i] != (char)c)
	{
		i++;
	}
	
	if (s[i] == '\0')
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
// 	char *res = ft_strchr(str, ch);
	
// 	printf("%s\n", res);
// }