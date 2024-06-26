#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - check code
 * @parent: Pointer to the node to be inserted
 * @value: pointer value to the new node
 * Description: adds a node as the left-child of another node
 * Return: Pointer to the new node, if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (new_node->left != NULL)
		new_node->left->parent = new_node;
	parent->left = new_node;

	return (new_node);
}
