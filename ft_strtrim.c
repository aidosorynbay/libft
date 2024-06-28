/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:06:01 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/27 17:06:01 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim_len(char const *s, char const *set)
{
	int	i;
	int	j;
	int	len_set;

	i = 0;
	j = 0;
	len_set = 0;
	while (set[j] != '\0')
	{
		if (s[i] == set[j])
		{
			len_set++;
			i++;
		}
		else
		{
			i++;
		}
		if (s[i] == '\0')
		{
			i = 0;
			j++;
		}
	}
	return (len_set);
}

static char	*removed_set(char *result, char const *s, char const *set, int i)
{
	int	j;
	int	k;
	int	is_set_char;

	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		is_set_char = 0;
		while (set[j] != '\0')
		{
			if (s[i] == set[j])
			{
				is_set_char = 1;
				break ;
			}
			j++;
		}
		if (!is_set_char)
			result[k++] = s[i];
		i++;
	}
	result[k] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		len_set;
	int		i;

	i = 0;
	len_set = trim_len(s1, set);
	result = malloc((sizeof(char) * ((ft_strlen(s1) - len_set) + 1)));
	if (result == NULL)
	{
		return (NULL);
	}
	result = removed_set(result, s1, set, i);
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     char str1[] = "yo remove thesea"; // y rmv ths
// 	// printf("%zu\n", ft_strlen(str1));
//     char str2[] = "aeo";
//     printf("|%s|\n", ft_strtrim(str1, str2));
// }