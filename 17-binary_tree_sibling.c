#include "binary_trees.h"

/**
 * binary_tree_sibling - Trouve le nœud frère d'un nœud donné
 * @node: Pointeur vers le nœud dont on cherche le frère
 *
 * Description: Un nœud frère est un nœud qui partage le même parent.
 *              Si le nœud est l'enfant gauche, son frère est l'enfant droit.
 *              Si le nœud est l'enfant droit, son frère est l'enfant gauche.
 *
 * Return: Pointeur vers le nœud frère, ou NULL si:
 *         - node est NULL
 *         - le parent de node est NULL (pas de frère possible)
 *         - node n'a pas de frère
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Vérifier si le nœud existe et a un parent */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Si le nœud est l'enfant gauche, retourner l'enfant droit */
	if (node->parent->left == node)
		return (node->parent->right);

	/* Si le nœud est l'enfant droit, retourner l'enfant gauche */
	if (node->parent->right == node)
		return (node->parent->left);

	/* Cas par défaut (ne devrait pas arriver dans un arbre valide) */
	return (NULL);
}
