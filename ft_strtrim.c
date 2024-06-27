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

static int  trim_len(char const *s, char const *set)
{
    char    *temp;
    int i;
    int j;

    i = 0;
    j = 0;
    temp = (char *)s;
    while (set[j] != '\0')
    {
        if (temp[i] == set[j])
        {
            i++;
        }
        else
        {
            temp[i] = set[j];
            i++;
        }
        if (temp[i] == '\0')
        {
            i = 0;
            
            j++;
        }
    }
    return ft_strlen(temp);
}

char    *removed_set(char *result, char const *s, char const *set)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    while (set[j] != '\0')
    {
        if (s[i] == set[j])
        {
            i++;
        }
        else
        {
            result[k] = s[i];
            k++;
            i++;
        }
        if (s[i] == '\0')
        {
            i = 0;
            k = 0;
            j++;
        }
    }
    result[k] = '\0';
    return result;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char    *result;
    int     len;

    len = trim_len(s1, set);
    result = malloc((sizeof(char) * len) + 1);
    if (result == NULL)
    {
        return NULL;
    }
    result = removed_set(result, s1, set);
    return result;
}

#include <stdio.h>
int main(void)
{
    char str1[] = "chars to remove";
    char str2[] = "aeo";
    printf("|%s|\n", ft_strtrim(str1, str2));
}