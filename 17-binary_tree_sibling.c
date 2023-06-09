#include "binary_trees.h"

/**
 * binary_tree_sibling -function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: the sibling node or NULL if otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->left && node->parent->right)
		{
			if (node->parent->left == node)
			{
				return (node->parent->right);
			}
			return (node->parent->left);
		}
	}
	return (NULL);
}
