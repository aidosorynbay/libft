/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:44:01 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/26 15:50:51 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return count;
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str[] = "a";
// 	printf("%zu\n", ft_strlen(str));
// 	printf("%zu\n", strlen(str));
// }