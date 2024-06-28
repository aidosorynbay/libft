/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:49:37 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/27 16:49:37 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	result = malloc(sizeof(s1) + sizeof(s2));
	i = 0;
	j = 0;
	if (result == NULL)
	{
		return (NULL);
	}
	while (s1[j] != '\0')
	{
		result[i++] = s1[j++];
	}
	j = 0;
	while (s2[j] != '\0')
	{
		result[i++] = s2[j++];
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     char str1[] = "combine";
//     char str2[] = " this";
//     printf("%s\n", ft_strjoin(str1, str2));
// }