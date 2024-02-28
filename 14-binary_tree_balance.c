#include "binary_trees.h"
/**
 *  binary_tree_height - height of binary tree
 *@tree: pointer to binary tree
 * Return: Always -1 (Success)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l >= r)
		return (1 + l);
	else
		return (r + 1);
}

/**
 *  binary_tree_balance - abs value
 *@tree: pointer to binary tree
 * Return: Always result (Success)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r, result;

	if (tree == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	result = l - r;

	result -= tree->right ? 0 : -1;
	result += tree->left ? 0 : -1;
	return (result);
}
