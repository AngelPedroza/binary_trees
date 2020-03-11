#include "binary_trees.h"

/**
 * binary_tree_insert_right -
 * @parent -
 * @value -
 * Return:
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new || !parent)
		return (NULL);

	new->left = NULL;
	new->right = NULL;
	new->n = value;
	new->parent = parent;

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
