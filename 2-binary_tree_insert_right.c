#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new;

	new = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right = new;
		new->right->parent = new;
	}
	else
	{
		parent->right = new;
	}
	return (new);
}
