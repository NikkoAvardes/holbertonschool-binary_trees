#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_Node - Creates a binary tree Node
 * @parent: Pointer to the parent Node
 * @value: Value to store in the new Node
 * @Node: A binary tree Node structure
 * Return: Pointer to the newly created Node, or NULL on failure
 */
binary_tree_t *binary_tree_Node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);

}