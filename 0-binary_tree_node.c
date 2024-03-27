#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 *
 * @parent: Pointer to the parent node of the node to create.
 * @value: Value to put in the new node.
 *
 * Return: A pointer to the parent node, otherwise NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (root == NULL)
	{
		return (NULL);
	}
	root->n = value;
	root->parent = parent;
	root->left = root->right = NULL;
	return (root);
}
