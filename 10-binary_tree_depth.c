#include "binary_trees.h"

/**
 *  binary_tree_depth -depth of binary tree
 *@tree: pointer to tree
 * Return: Always depth (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	depth += 1;
	return (depth);
}
