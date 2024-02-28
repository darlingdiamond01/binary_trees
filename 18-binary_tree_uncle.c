#include "binary_trees.h"
/**
 * binary_tree_sibling -  finds the sibling of a node
 *@node: pointer to tree
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle -  finds the uncle of a node
 *@node: node to root
 * Return: Another function
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
