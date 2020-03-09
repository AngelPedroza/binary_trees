#include "binary_trees.h"

/**
 * binary_tree_insert_left -
 * @parent -
 * @value -
 * Return:
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new || !parent)
		return (NULL);

	new->left = NULL;
	new->right = NULL;
	new->n = value;

	new->parent = parent;
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
