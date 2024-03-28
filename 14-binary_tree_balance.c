#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the heigh.
 *
 * Return: The height of the tree, otherwise 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((left > right ? left : right));
}

/**
 * binary_tree_balance - Measures the balancefactor of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Balance factor of the binary tree, otherwise 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	}
	return (0);
}