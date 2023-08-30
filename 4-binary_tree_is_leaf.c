#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node
 *
 * Return: 1 if node is leaf, if not 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL);
}