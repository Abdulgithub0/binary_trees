#include "binary_trees.h"
size_t left_tour(binary_tree_t *t);
size_t right_tour(binary_tree_t *t);

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the btree or 0 if otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = left_tour(tree->left);
	right = right_tour(tree->right);
	if (left >= right)
		return (left);
	return (right);
}

/**
 * left_tour - traversal the entire left subtree till the deepest leaf
 * @t: pointer to the first subtree of the root
 * Return: height of the first left subtree
 */

size_t left_tour(binary_tree_t *t)
{
	if (t != NULL)
		return (left_tour(t->left) + 1);
	return (0);
}

/**
 * right_tour - traversal the entire right subtree till the deepest leaf
 * @t: pointer to the first right first subtree of the root
 * Return: height of the first right subtree
 */

size_t right_tour(binary_tree_t *t)
{
	if (t)
		return (right_tour(t->right) + 1);
	return (0);
}
