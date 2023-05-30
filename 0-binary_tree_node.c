#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: pointer to the node above the node to be created
 * @value: of the 'n' integer data field
 * Return: Address of the newly created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt_node;

	bt_node = malloc(sizeof(binary_tree_t));
	if (!bt_node)
		return (NULL);
	bt_node->n = value;
	if (!parent)
		bt_node->parent = NULL;
	else
		bt_node->parent = parent;
	return (bt_node);
}
