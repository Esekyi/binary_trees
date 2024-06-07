#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - check code
 * @node: pointer to the node to inspect
 * Description: a function that checks if a node is a leaf
 * Return: 0, if node is Nulll
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	return (1);
}
