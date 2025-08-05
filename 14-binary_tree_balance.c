

#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Mesure la hauteur d'un arbre binaire
 * @tree: Pointeur vers le nœud racine de l'arbre à mesurer
 * Return: Hauteur de l'arbre, ou 0 si l'arbre est NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height_l = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		height_r = 1 + binary_tree_height(tree->right);

	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_balance - Mesure le facteur d'équilibre d'un arbre binaire
 * @tree: Pointeur vers le nœud racine de l'arbre à mesurer
 * Return: Facteur d'équilibre de l'arbre, ou 0 si l'arbre est NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = (tree->left) ? (int)binary_tree_height(tree->left) + 1 : 0;

	right_height = (tree->right) ? (int)binary_tree_height(tree->right) + 1 : 0;

	return (left_height - right_height);
}
