#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: node to insert the right-child in
 * @value: value to store in the new node.
 * Return: pointer to the created node,
 *         or NULL on failure or if @parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node || !parent)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	if (!(parent->right))
	{
		parent->right = new_node;
		return (new_node);
	}

	new_node->right = parent->right;
	parent->right->parent = new_node;
	parent->right = new_node;

	return (new_node);
}
