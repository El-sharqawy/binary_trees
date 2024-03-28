#include "binary_trees.h"

/**
 * isPerfectTree - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check.
 * @expectedDepth: the depth of the tree to check.
 *
 * Return: 1 if tree is perfect, otherwise 0.
 */
int isPerfectTree(const binary_tree_t *tree, int expectedDepth)
{
	if (tree == NULL)
	{
		return (0 == expectedDepth);
	}

	if (!tree->right != !tree->left)
	{
		return (0);
	}

	return (isPerfectTree(tree->left, expectedDepth - 1) &&
		isPerfectTree(tree->right, expectedDepth - 1));
}

/**
 * iDepthLeft - Check the Depth of a binary tree on the left.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: Depth of the left nodes, otherwise 0.
 */ 
int iDepthLeft(const binary_tree_t *tree)
{
	return tree == NULL ? 0 : 1 + iDepthLeft(tree->left);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        int iDepth = 0, isPerfect = 0;

        if (tree == NULL)
        {
                return (0);
        }

        iDepth = iDepthLeft(tree);
        isPerfect = isPerfectTree(tree, iDepth);
        return (isPerfect);
}
