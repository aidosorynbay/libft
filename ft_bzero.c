/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:41:54 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/28 15:19:45 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	if (n == 0)
	{
		return ;
	}
	while (i < n)
	{
		str[i++] = '\0';
	}
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	unsigned char str[] = "uehfasdjfyoyo";
// 	int n = 76;
// 	ft_bzero(str + 3, 7);
// 	ft_bzero(&n, (0));
// 	printf("%i\n", n);
// 	printf("|%c|\n", str[9]);
// 	printf("%s\n", str);

// 	unsigned char str1[] = "uehfasdjfyoyo";
// 	int n1 = 76;
// 	bzero(str1 + 3, 7);
// 	bzero(&n1, (0));
// 	printf("%i\n", n1);
// 	printf("|%c|\n", str1[9]);
// 	printf("%s\n", str1);
// }