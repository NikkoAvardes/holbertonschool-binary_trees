#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfait
 * @tree: Pointeur vers le nœud racine de l'arbre à vérifier
 *
 * Return: 1 si l'arbre est parfait, 0 sinon
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t size = 0;
	size_t perfect_size = 0;

	if (tree == NULL)
		return (0);

	/* Calcule la hauteur et la taille de l'arbre */
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	/* Calcule la taille parfaite : 2^(hauteur + 1) - 1 */
	perfect_size = (1 << (height + 1)) - 1;

	/* Vérifie si la taille réelle égale la taille parfaite */
	return (size == perfect_size);
}

