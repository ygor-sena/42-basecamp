/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorgsena <ygorgsena@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:32:54 by ygorgsena         #+#    #+#             */
/*   Updated: 2022/11/10 09:05:05 by ygorgsena        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	left_depth;
	int	right_depth;

	if (!root)
		return (0);
	left_depth = btree_level_count(root->left);
	right_depth = btree_level_count(root->right);
	if (left_depth > right_depth)
		return (left_depth + 1);
	else
		return (right_depth + 1);
}
 
/* 
#include <stdio.h>
int main(void)
{
	char *content = "42";
	t_btree *root = btree_create_node((void *) content);
	
	printf("The content is: %s", (char *) root->item);
	root->left = btree_create_node((void *) content);
	root->right = btree_create_node((void *) content);
	root->left->left = btree_create_node((void *) content);
	root->right->left = btree_create_node((void *) content);
	root->right->right = btree_create_node((void *) content);
	root->right->right->left = btree_create_node((void *) content);
	root->right->left->right = btree_create_node((void *) content);
	printf("The maximum depth is: %d", btree_level_count(root));
} */
