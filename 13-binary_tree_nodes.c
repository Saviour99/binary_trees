#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: total number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t t_nodes, right_node = 0, left_node = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);
	t_nodes = left_node + right_node;

	if (tree->left == NULL || tree->right == NULL)
		return (t_nodes + 1);

	return (t_nodes + 1);
}
