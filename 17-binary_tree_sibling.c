#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: pointer to the node to find the sibling of
 * Return: pointer to the sibling node, or NULL fail sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	binary_tree_t *parent = node->parent;

	if (parent->left == node)
	{
		return (parent->right);
	}
	else
		(return parent->left);
}
