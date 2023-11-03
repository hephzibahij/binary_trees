#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a child at the right of the root
 * @parent: root or parent node
 * @value: data for new node
 * Return: new_node or null on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_right_child;

	if (parent == NULL)
		return (NULL);

	old_right_child = parent->right;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = old_right_child;
	new_node->left = NULL;

	if (old_right_child != NULL)
		old_right_child->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
