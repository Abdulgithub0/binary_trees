#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: pointer to node to check
 * Return: 1 if node is a leaf or 0 if otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && (node->left || node->right))
		return (0);
	return (1);
}
