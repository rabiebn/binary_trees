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
    size_t leaves = 0;

    if (!tree)
        return (0);

    if (!(tree->right) && !(tree->left))
        return (leaves++);
}