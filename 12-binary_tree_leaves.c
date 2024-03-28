#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree,
 * to count number of leaves.
 *
 * Return: Number of the leaves in the tree, otherwise 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int nLeaves = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right == NULL && tree->left == NULL)
	{
		nLeaves += 1;
	}
	else
	{
		if (tree->left != NULL)
		{
			nLeaves += binary_tree_leaves(tree->left);
		}
		if (tree->right != NULL)
		{
			nLeaves += binary_tree_leaves(tree->right);
		}
	}
	return (nLeaves);
}
