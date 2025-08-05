#include <stddef.h>
#include "binary_trees.h"

/**
 * get_depth - Obtient la profondeur maximale de l'arbre
 * @tree: Pointeur vers le nœud racine
 *
 * Return: Profondeur maximale de l'arbre
 */
int get_depth(const binary_tree_t *tree)
{
	int left_depth, right_depth;

	if (tree == NULL)
		return (0);

	left_depth = get_depth(tree->left);
	right_depth = get_depth(tree->right);

	return (left_depth > right_depth ? left_depth + 1 : right_depth + 1);
}

/**
 * is_perfect_recursive - Vérifie récursivement si l'arbre est parfait
 * @tree: Pointeur vers le nœud racine
 * @level: Niveau actuel
 * @depth: Profondeur maximale de l'arbre
 *
 * Return: 1 si parfait, 0 sinon
 */
int is_perfect_recursive(const binary_tree_t *tree, int level, int depth)
{
	/* Si l'arbre est vide, il est parfait */
	if (tree == NULL)
		return (1);

	/* Si c'est une feuille, vérifier qu'elle est au bon niveau */
	if (tree->left == NULL && tree->right == NULL)
		return (level == depth - 1);

	/* Si ce n'est pas une feuille, vérifier qu'il a 2 enfants */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Vérifier récursivement les sous-arbres */
	return (is_perfect_recursive(tree->left, level + 1, depth) &&
		is_perfect_recursive(tree->right, level + 1, depth));
}

/**
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfait
 * @tree: Pointeur vers le nœud racine de l'arbre à vérifier
 *
 * Return: 1 si l'arbre est parfait, 0 sinon
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Vérifier si l'arbre est parfait */
	return (is_perfect_recursive(tree, 0, get_depth(tree)));
}
