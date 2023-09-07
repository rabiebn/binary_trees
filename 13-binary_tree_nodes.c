#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: root node of the tree.
 * Return: number of nodes with at least 1 child, 0 if @tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (!tree)
		return (0);

	if (tree->right || tree->left)
		child = 1;

	child += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->left);

	return (child);
}
