/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 10:44:54 by aorynbay          #+#    #+#             */
/*   Updated: 2024/06/28 12:25:46 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**check_memall(char **arr, int i)
{
	int	j;

	j = 0;
	if (arr[i] == NULL)
	{
		while (j < i)
		{
			free(arr[i]);
			i++;
		}
		return (NULL);
	}
	return (arr);
}

static char	**malloc_for_each_str(char **result, const char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i] != c && s[i] != '\0') // explain this
			{
				j++;
				i++;
			}
			result[k] = malloc(sizeof(char) * (j + 1));
			result = check_memall(result, k);
			k++;
		}
	}
	return (result);
}

static int	sep_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
		}
		i++;
	}
	return (count + 1);
}

static char	**allocate_chars(char **result, const char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			k = 0;
			while (s[i] != c && s[i] != '\0')
			{
				result[j][k++] = s[i++];
			}
			result[j++][k] = '\0';
		}
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		c_count;

	c_count = sep_count(s, c);
	result = malloc(sizeof(char *) * c_count + 1);
	result[c_count + 1] = NULL;
	if (result == NULL)
	{
		return (NULL);
	}
	result = malloc_for_each_str(result, s, c);
	result = allocate_chars(result, s, c);
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "splitzthesezwordszapartzpls";
// 	char sep = 'z';
// 	char **arr;

// 	arr = ft_split(str, sep);
// 	int i = 0;
// 	while (arr[i] != NULL)
// 	{
// 		printf("|%s|", arr[i]);
// 		i++;
// 	}
// }