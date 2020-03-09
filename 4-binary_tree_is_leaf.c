#include "binary_trees.h"

/**
 * binary_tree_is_leaf -
 * @parent -
 * @value -
 * Return:
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->right && !node->left && node->parent)
		return (1);
	return (0);
}
