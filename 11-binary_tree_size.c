#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: Size of the tree, otherwise 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lSize = 0, rSize = 0;

	if (tree)
	{
		lSize = binary_tree_size(tree->left);
		rSize = binary_tree_size(tree->right);
		return (rSize + lSize + 1);
	}
	return (0);
}
