#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node in right.
 * @parent: A pointer to the node to insert right-child.
 * @value: The value to store in the node.
 * Return: A pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ndoe;

	if (parent == NULL)
		return (NULL);

	ndoe = binary_tree_node(parent, value);
	if (ndoe == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		ndoe->right = parent->right;
		parent->right->parent = ndoe;
	}
	parent->right = ndoe;

	return (ndoe);
}
