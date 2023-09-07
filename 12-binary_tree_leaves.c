#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves in a binary tree
 *
 * @tree: root node of the tree
 * Return: number of leaves, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}
