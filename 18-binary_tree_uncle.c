#include "binary_trees.h"

/**
 * binary_tree_uncle - Trouve l'oncle d'un nœud donné
 * @node: Pointeur vers le nœud dont on cherche l'oncle
 * Return: Pointeur vers le nœud oncle, ou NULL si pas d'oncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->parent == NULL)
		return (NULL);

	grandparent = parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);

	if (grandparent->right == parent)
		return (grandparent->left);

	return (NULL);
}
