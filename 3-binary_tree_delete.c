#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 *
 * @tree: Pointer to the root node of the tree to delete.
 *
 * Return: Nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Use Recursive way to free it */
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
