/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:34:02 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/27 16:34:02 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (length < len)
		length = ft_strlen(s) - start;
	else
		length = len;
	result = malloc(sizeof(char) * (length + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	while (len > 0)
	{
		result[i] = s[start];
		start++;
		i++;
		len--;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     char str[] = "hello";
//     printf("%s\n", ft_substr(str, 8, 7));
// }