#include "binary_trees.h"
/**
 * binary_tree_size - finds the size of the tree
 * @tree: pointer to the root node
 * Return: size tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l;
	size_t r;
	size_t s = 0;

	if (tree == NULL)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	s += (l + r + 1);
	return (s);
}
