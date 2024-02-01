#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i, j;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		i = 1 + binary_tree_height(tree->left);
	}
	else
	{
		i = 0;
	}
	if (tree->right)
	{
		j = 1 + binary_tree_height(tree->right);
	}
	else
	{
		j = 0;
	}
	return ((i > j ? i : j));
}
