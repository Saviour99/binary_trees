#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the created node.
 * @value: The value of the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	return (newNode);
}
