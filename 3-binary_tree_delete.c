#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - check code
 * @tree: pointer to the root node of the tree to delete
 * Description: Deletes an entire binary tree
 * Return: Nothing if tree is Nulll
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}


	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);


	free(tree);
}
