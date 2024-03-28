#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 *
 * Return: Number of the nodes with at least 1 child, otherwise 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t iNodes = 0;

	if (tree)
	{
		iNodes += (tree->right || tree->left) ? 1 : 0;
		iNodes += binary_tree_nodes(tree->left);
		iNodes += binary_tree_nodes(tree->right);
	}

	return (iNodes);
}
