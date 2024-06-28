/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:14:46 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/28 15:31:45 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*result;

	result = malloc(nmemb * size);
	if (nmemb * size == 0 && result == NULL)
	{
		return (NULL);
	}
	result = ft_memset(result, '0', nmemb * size);
	return (result);
}

// int	main(void)
// {

// }