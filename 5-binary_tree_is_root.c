#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - check the code
 * @node: pointer to the node
 * Description: checks if a node is the root of a binary tree
 * Return: 1 if node is the root and 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
