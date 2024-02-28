#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: pointer to tree
 * Return: child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child;


	if (tree == NULL)
		return (0);


	child = binary_tree_nodes(tree->left);
	child += binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		child += 1;
	return (child);
}
