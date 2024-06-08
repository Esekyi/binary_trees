#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_leaves - check code
 * @tree: pointer to the root node
 * Description: function that counts the leaves in a binary tree
 * Return: NULL pointer, if not a leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
