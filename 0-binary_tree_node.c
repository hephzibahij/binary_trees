#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a new node in a binary tree
 * @parent: pointer to root/parent node
 * @value: data in new_node
 * Return: new_node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* allocates space for new node */
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	/* Initialises node with given values */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
