#include "binary_trees.h"

/**
 * binary_tree_is_perfect -
 * @tree:
 * Return:
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
			return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	return (0);
}
