#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of a node.
 *
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, NULL on failure or if parent is NULL.
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *child;

	if (parent == NULL)
	{
		return (NULL);
	}

	child = malloc(sizeof(binary_tree_t));

	if (child == NULL)
	{
		return (NULL);
	}

	child->n = value;
	child->parent = parent;
	child->left = NULL;
	child->right = parent->right;

	if (parent->right != NULL)
	{
		child->right = parent->right;
		parent->right->parent = child;
	}

	parent->right = child;

	return (child);
}
