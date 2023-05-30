#include "binary_trees.h"

/**
 * binary_tree_insert_right -inserts a node as the right-child of another node
 * @parent: pointer to the node above the node to be created
 * @value: value of the node
 * Return: the newly added right child node or NULL if error
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child, *temp;

	if (!parent)
		return (NULL);
	new_right_child = malloc(sizeof(binary_tree_t));
	if (!new_right_child)
		return (NULL);
	new_right_child->n = value;
	if (parent->right)
	{
		temp = parent->right;
		new_right_child->parent = parent;
		parent->right = new_right_child;
		new_right_child->right = temp;
		temp->parent = new_right_child;
	}
	else
	{
		new_right_child->parent = parent;
		parent->right = new_right_child;
	}
	return (new_right_child);
}
