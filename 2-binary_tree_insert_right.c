#include "binary_trees.h"

/**
* binary_tree_insert_right -  creates a binary tree node
*@parent: is the parent of root
*@value: is the value of the tree
* Return: Always 0 (Success)
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left = NULL;

	if (parent->right)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;
	return (newnode);
}
