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
	int height_left = 0;
	int height_right = 0;

	if (tree == NULL)
		return (0);

	/* Calculate height of left subtree */
	height_left = (int)binary_tree_height(tree->left);

	/* Calculate height of right subtree */
	height_right = (int)binary_tree_height(tree->right);

	/* Return balance factor: height(left) - height(right) */
	return (height_left - height_right);
}


