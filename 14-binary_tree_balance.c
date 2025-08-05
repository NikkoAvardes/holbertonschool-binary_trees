#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	/* Get height of left subtree */
	left_height = (tree->left) ? (int)binary_tree_height(tree->left) + 1 : 0;

	/* Get height of right subtree */
	right_height = (tree->right) ? (int)binary_tree_height(tree->right) + 1 : 0;

	/* Return balance factor: left_height - right_height */
	return (left_height - right_height);
} 
