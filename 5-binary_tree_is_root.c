#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node
 *
 * Return: 1 if node is a root, if not 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->parent == NULL);
}
