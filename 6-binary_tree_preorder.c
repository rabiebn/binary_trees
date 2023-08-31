#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 *
 * @tree: root node of tree in question
 * @func: pointer to a function to call for each node,
 *        teakes the value in the node as a parameter.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
