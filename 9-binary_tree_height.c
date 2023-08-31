#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Mesures the height f a binary tree
 *
 * @tree: root node of the tree
 * Return: height of the tree, 0 if tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (height_l > height_r ? height_l : height_r);
}
