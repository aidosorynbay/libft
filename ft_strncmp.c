/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:10:31 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/25 19:47:14 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	i = 0;

	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
		i++;
	}
	return 0;
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s1[] = "yooddf";
// 	char s2[] = "yood";
// 	int a = ft_strncmp(s1, s2, 6);
// 	printf("%i", a);
// }