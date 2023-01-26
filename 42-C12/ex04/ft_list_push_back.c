/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-goes <yde-goes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:04:44 by ygorgsena         #+#    #+#             */
/*   Updated: 2023/01/26 17:44:06 by yde-goes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;

	new_elem = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = new_elem;
		return ;
	}
	while ((*begin_list)->next)
	{
		*begin_list = (*begin_list)->next;
	}
	(*begin_list)->next = new_elem;
}
