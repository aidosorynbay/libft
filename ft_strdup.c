/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:14:01 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/28 15:32:33 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	int		i;

	result = malloc(sizeof(s));
	i = 0;
	if (result == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		result[i] = s[i];
		i++;
	}
	result[i] = s[i];
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str1[] = "word";
// 	char *str2 = ft_strdup(str1);
// 	puts(str2);
// }