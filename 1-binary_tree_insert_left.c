#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new_node at the left and remove
 * existing left to new_node left
 * @parent: root node
 * @value: data in new_node
 * Return: new_node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_left_child;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	old_left_child = parent->left;
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = old_left_child;
	new_node->right = NULL;

	if (old_left_child != NULL)
		old_left_child->parent = new_node;

	parent->left = new_node;

	return (new_node);
}
