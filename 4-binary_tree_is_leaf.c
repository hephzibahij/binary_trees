#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a tree is a leaf or not
 * @node: pointer to node to check
 * Return: returns 1 if it is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->right || node->left)
		return (0);
	return (1);
}
