#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: The height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_ht, right_ht;

	if (tree == NULL)
		return (0);

	left_ht = binary_tree_height(tree->left);
	right_ht = binary_tree_height(tree->right);

	if (left_ht > right_ht)
		return (left_ht + 1);
	else
		return (right_ht + 1);
}
