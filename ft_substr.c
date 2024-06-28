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

	i = 0;
	result = malloc((sizeof(char) * len) + 1);
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
//     char str[] = "resistance";
//     printf("%s\n", ft_substr(str, 4, 6));
// }