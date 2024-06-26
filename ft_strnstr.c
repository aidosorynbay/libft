/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:47:21 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/25 19:47:41 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i = 0;
	size_t j = 0;
	char *result;
	size_t count = 0;

	result = (char *)haystack;

	while (haystack[i] != '\0' && needle[j] != '\0' && i < len)
	{
		if (needle[j] == haystack[i])
		{
			count = i;
			while (needle[j + 1] == haystack[i + 1] && needle[j] != '\0')
			{
				i++;
				j++;
			}
		}
		i++;
	}
	return result + count;
}

#include "stdio.h"
int	main(void)
{
	char str1[] = "yoobitbityoo";
	char str2[] = "bitbit";
	char *result = ft_strnstr(str1, str2, 13);
	puts(result);
}