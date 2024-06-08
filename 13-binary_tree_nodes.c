#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - check the code
 * @tree: a pointer to the root node
 * Description: function that counts the nodes with at least 1 child
 * Return: NULL pointer i not node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - check the function
 * @tree: Pointer to the root node of the tree to measure the size
 * Description: Measures the size of a binary tree
 * Return: The size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

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
