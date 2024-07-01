/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:14:46 by aorynbay          #+#    #+#             */
/*   Updated: 2024/07/01 18:10:21 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*result;
	size_t	prod;

	prod = nmemb * size;
	if (nmemb * size == 0 && (prod / nmemb != size))
	{
		return (NULL);
	}
	result = malloc(nmemb * size);
	if (result == NULL)
	{
		return (NULL);
	}
	result = ft_memset(result, 0, nmemb * size);
	return (result);
}

// int	main(void)
// {

// }