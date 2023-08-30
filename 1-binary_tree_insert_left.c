#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_node;

	if (parent == NULL)
		return (NULL);

	nw_node = binary_tree_node(parent, value);
	if (nw_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		nw_node->left = parent->left;
		parent->left->parent = nw_node;
	}

	parent->left = nw_node;

	return (nw_node);
}
