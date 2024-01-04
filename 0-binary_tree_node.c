#include "binary_trees.h"

/**
 * binary_tree_node - Creates a bin tree node
 * @parent: A pointer to the parent of the node.
 * @value: The value of the new node.
 * Return: a pointer
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	return (node);
}
