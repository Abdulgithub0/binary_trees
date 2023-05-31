#include "binary_trees.h"

/**
 * binary_tree_uncle -function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return: the uncle node or NULL if otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
	{
		if (node->parent->parent->left && node->parent->parent->right)
		{
			if (node->parent->parent->left == node->parent)
			{
				return (node->parent->parent->right);
			}
			return (node->parent->parent->left);
		}
	}
	return (NULL);
}
