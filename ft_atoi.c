/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:36:24 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/26 23:12:13 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int result = 0;
	int i = 0;
	int sign = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}

	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	
	while (str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return result * sign;
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "	 -453";
// 	printf("%i\n", ft_atoi(str));
// 	printf("%i\n", atoi(str));
// }
