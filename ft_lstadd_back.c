/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:50:38 by aorynbay          #+#    #+#             */
/*   Updated: 2024/07/04 16:50:38 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (new == NULL)
		return ;
	if (lst == NULL || *lst == NULL)
		*lst = new;
	else
	{
		curr = *lst;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new;
	}
}
