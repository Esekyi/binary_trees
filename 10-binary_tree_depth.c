#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - check the codes
 * @tree: pointer to the node to measure the depth
 * Description: measures the depth of a node in a binary tree
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
