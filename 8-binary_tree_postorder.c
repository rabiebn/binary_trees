#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using postorder traversal
 *
 * @tree: root node of tree in question
 * @func: pointer to a function to call for each node,
 *        teakes the value in the node as a parameter.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
