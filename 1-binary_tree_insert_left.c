#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent of the created node
 * @value: value of the new node
 *
 * Return: integer
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *current;

	if (parent == NULL)
		return (NULL);

	current = binary_tree_node(parent, value);
	if (current == NULL)
                return (NULL);

	if (parent->left != NULL)
	{
		current->left = parent->left;
		parent->left->parent = current;
	}

	parent->left = current;

	return (current);
}
