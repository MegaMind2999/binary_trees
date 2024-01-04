#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 * Return: 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0 or len
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t leftsize = 0, rightsize = 0;

		leftsize = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rightsize = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((leftsize > rightsize) ? leftsize : rightsize);
	}

	return (0);
}
