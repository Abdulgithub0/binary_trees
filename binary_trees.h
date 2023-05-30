#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/* Alias for binary tree structure */
typedef struct binary_tree_s binary_tree_t;

/*Alias for Binary search tree structure */
typedef struct binary_tree_s bst_t;

/* Alias for AVL tree */
typedef struct binary_tree_s avl_t;

/* Alias for Max Binary Heap */
typedef struct binary_tree_s heap_t;

/*func's prototype for vizualizing Bst_t, Binary_tree_t, avl_t & heap_t*/
void binary_tree_print(const binary_tree_t *);

/*List of function prototypes used for manipualting Binary tree */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);

#endif /* contain all the prototype of structs and funct.*/
