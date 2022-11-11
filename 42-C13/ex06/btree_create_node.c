/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:22:00 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/11/09 16:26:54 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*root;

	root = malloc(sizeof(*root));
	if (!root)
		return (NULL);
	root->item = item;
	root->left = NULL;
	root->right = NULL;
	return (root);
}
