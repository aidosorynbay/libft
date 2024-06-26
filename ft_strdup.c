/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:14:01 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/25 19:47:16 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *result;
	int i;

	result = malloc(sizeof(s1));
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = s1[i];
	return result;
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str1[] = "word";
// 	char *str2 = ft_strdup(str1);
// 	puts(str2);
// }