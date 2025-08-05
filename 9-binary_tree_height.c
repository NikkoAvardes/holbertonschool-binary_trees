#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
		return (0);

	/* Calculate height of left subtree */
	if (tree->left != NULL)
		height_l = 1 + binary_tree_height(tree->left);

	/* Calculate height of right subtree */
	if (tree->right != NULL)
		height_r = 1 + binary_tree_height(tree->right);

	/* Return the maximum height */
	return (height_l > height_r ? height_l : height_r);
}
