#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *@tree: pointer to tree
 * Return: leav
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leav = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		leav = binary_tree_leaves(tree->left);
		leav += binary_tree_leaves(tree->right);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (leav + 1);
	return (leav);
}
