/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:14:46 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/25 19:47:12 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i = 0;
	char *str;

	str = (char *)s;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != (char)c && i > 0)
	{
		i--;
	}
	if (i == 0)
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
// 	char *res = ft_strrchr(str, ch);
	
// 	printf("%s\n", res);
// }