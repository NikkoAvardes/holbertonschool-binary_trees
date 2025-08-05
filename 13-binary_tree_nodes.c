#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Check if current node has at least 1 child */
	if (tree->left != NULL || tree->right != NULL)
	{
		/* Count current node + recursively count in subtrees */
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}

	/* If no children, don't count this node, just count in subtrees */
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
