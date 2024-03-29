#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store the new node.
 *
 * Return: A pointer to the created node, NULL on failure.
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	child->right = NULL;
	child->left = parent->left;

	if (parent->left != NULL)
	{
		child->left = parent->left;
		parent->left->parent = child;
	}

	parent->left = child;

	return (child);
}
