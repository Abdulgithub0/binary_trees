#include "binary_trees.h"

/**
 * binary_tree_nodes - count total internal nodes in the btree
 * @tree: pointer to the root of the btree
 * Return: total internal nodes or 0 if NULL btree's root is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t internal_node;

	internal_node = 0;
	if (tree)
	{
		internal_node += binary_tree_nodes(tree->left);
		internal_node += binary_tree_nodes(tree->right);
		if (tree->left || tree->right)
			internal_node += 1;
		return (internal_node);
	}
	return (internal_node);
}
