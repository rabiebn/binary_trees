#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: node to insert the left-child in
 * @value: value to store in the new node.
 * Return: pointer to the created node,
 *         or NULL on failure or if @parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node || !parent)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (!(parent->left))
	{
		parent->left = new_node;
		new_node->left = NULL;
		return (new_node);
	}

	new_node->left = parent->left;
	parent->left->parent = new_node;
	parent->left = new_node;

	return (new_node);
}
