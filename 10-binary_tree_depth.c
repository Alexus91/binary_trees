#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @node: pointer to the node
 *
 * Return: node depth if success. If node is NULL, return 0
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t c = 0;

	if (node == NULL)
		return (c);
	while (node->parent != NULL)
	{
		c++;
		node = node->parent;
	}
	return (c);
}
