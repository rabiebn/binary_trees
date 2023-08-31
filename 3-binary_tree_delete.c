#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * @tree: root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (!tree)
		return;

	left = tree->left;
	right = tree->right;
	free(tree);
	binary_tree_delete(left);
	binary_tree_delete(right);
}
