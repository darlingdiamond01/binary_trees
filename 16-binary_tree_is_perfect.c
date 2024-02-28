#include "binary_trees.h"
/**
 *_pow_recursion - prints a string, in reverse.
 *@x: integer 1
 *@y: integer 2
 *Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

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

/**
 * binary_tree_is_perfect - check if perfect
 *@tree: pointer to tree
 * Return: Always 0 (Success)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((_pow_recursion(2, binary_tree_height(tree))) ==
	    (int)binary_tree_leaves(tree))
		return (1);
	return (0);
}
