/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:58:26 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/26 19:56:51 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;
	int i = 0;

	str = (char *)s;
	while (s[i] != '\0' && s[i] != (char)c)
	{
		i++;
	}

	if (c == '\0')
	{
		return str + i;
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
// 	char ch = 'v';
// 	char *res = ft_strchr(str, ch);
	
// 	printf("|%s|\n", res);
// }