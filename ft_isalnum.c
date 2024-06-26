/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:15:44 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/26 15:15:51 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((char)c >= 'a' && (char)c <= 'z') || ((char)c >= 'A' && (char)c <= 'Z')
			 || ((char)c >= '0' && (char)c <= '9'))
	{
		return 1;
	}
	return 0;
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	int c = 'D';
// 	printf("%i\n", ft_isalnum(c));
// 	printf("%i\n", isalnum(c));
// }