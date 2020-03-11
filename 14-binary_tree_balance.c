#include "binary_trees.h"

/**
 * binary_tree_height -
 * @tree -
 * Return:
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t levelr = 0, levell = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		levell = binary_tree_height(tree->left);
		levell += 1;
	}
	if (tree->right)
	{
		levelr = binary_tree_height(tree->right);
		levelr += 1;
	}
	return (levelr > levell ? levelr : levell);
}

/**
 * binary_tree_balance -
 * @tree -
 * Return:
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, res;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
        res = right - left;

	res += tree->right ? 0 : -1;
	res -= tree->left ? 0 : -1;
	return (res);
}
