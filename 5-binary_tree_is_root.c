#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 *
 * Description: This function checks whether a given node is the root of
 * a binary tree by examining its parent pointer. If the node is a root,
 * it returns 1; otherwise, it returns 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
