#include "binary_trees.h"

/**
 * binary_tree_height -
 * @tree -
 * Return:
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t level = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		level += 1;
		binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		level += 1;
		binary_tree_height(tree->right);
	}
	return (level);
}
