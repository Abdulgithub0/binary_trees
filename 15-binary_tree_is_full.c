#include "binary_trees.h"
int check_full(binary_tree_t *t);
/**
 * binary_tree_is_full - check if a btree is full or not
 * @tree: pointer to the root of the btree
 * Return: 1 if full or 0 if otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *t;

	int status;

	if (!tree)
		return (0);
	t = tree;
	status = check_full(t);
	if (status >= 1)
		return (status);
	return(0);
}

/**
 *
 *
 */

int check_full(binary_tree_t *t)
{
	int status;

	status = 0;
	if (t && ((t->left && t->right) || !(t->left && t->right)))
		status = 1;
	else
		return (status);

	status += check_full(t->left);
	status += check_full(t->right);	
}

