#include "binary_trees.h"
int left_tour(binary_tree_t *t);
int right_tour(binary_tree_t *t);

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to guage the balance factor
 * Return: balance factor or 0 if root is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = left_tour(tree->left);
	right = right_tour(tree->right);
	return (left - right);
}

/**
 * left_tour - traversal the entire left subtree till the deepest leaf
 * @t: pointer to the first subtree of the root
 * Return: height of the first left subtree
 */

int left_tour(binary_tree_t *t)
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

int right_tour(binary_tree_t *t)
{
	if (t)
		return (right_tour(t->right) + 1);
	return (0);
}
