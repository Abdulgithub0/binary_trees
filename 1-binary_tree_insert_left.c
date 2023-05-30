#include "binary_trees.h"

/**
 * binary_tree_insert_left -inserts a node as the left-child of another node
 * @parent: pointer to the node above the node to be created
 * @value: value of the node
 * Return: the newly added left child node or NULL if error
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child, *temp;

	if (!parent)
		return (NULL);
	new_left_child = malloc(sizeof(binary_tree_t));
	if (!new_left_child)
		return (NULL);
	new_left_child->n = value;
	if (parent->left)
	{
		temp = parent->left;
		new_left_child->parent = parent;
		parent->left = new_left_child;
		new_left_child->left = temp;
		temp->parent = new_left_child;
	}
	else
	{
		new_left_child->parent = parent;
		parent->left = new_left_child;
	}
	return (new_left_child);
}
