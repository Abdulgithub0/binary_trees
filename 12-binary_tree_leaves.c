#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of leaves in a node
 * @tree: pointer to the root of the btree
 * Return: total leaves or 0 if NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	leaves = 0;
	if (tree)
	{
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
		if (!(tree->left && tree->right))
			leaves = 1;
		return (leaves);
	}
	return (leaves);
}
