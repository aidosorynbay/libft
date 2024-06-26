/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:07:22 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/26 15:22:04 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((char)c >= 'a' && (char)c <= 'z') || ((char)c >= 'A' && (char)c <= 'Z'))
	{
		return 1;
	}
	return 0;
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	int c = 'a';
// 	printf("%i\n", ft_isalpha(c));
// 	printf("%i\n", isalpha(c));
// }