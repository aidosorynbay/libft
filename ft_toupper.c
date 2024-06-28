/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:37:52 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/26 19:37:52 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((char)c >= 'a' && (char)c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
//     char c = 'a';
//     printf("%c\n", ft_toupper(c));
//     printf("%c\n", toupper(c));
// }