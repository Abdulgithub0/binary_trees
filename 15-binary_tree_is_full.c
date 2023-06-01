#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a btree is full or not
 * @tree: pointer to the root of the btree
 * Return: 1 if full or 0 if otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int status, p_status;

	status = 0;
	p_status = 0;
	if (!tree)
		return (status);
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);
	if ((tree->left && tree->right))
		status = 1;
	if (!(tree->left && tree->right))
		status = 1;
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
	{
		status = 0;
		p_status = status;
	}
	if (tree->parent == NULL)
		status = p_status;
	return (status);
}
