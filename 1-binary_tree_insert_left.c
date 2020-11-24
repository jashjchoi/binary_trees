#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: ptr to parent node
* @value: key to insert
* Return: address of the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left = NULL;

	if (!parent)
	{
		return (NULL);
	}
	new_left = binary_tree_node(parent, value);
	if (!new_left)
	{
		return (NULL);
	}
	if (parent->left)
	{
		parent->left->parent = new_left;
		new_left->left = parent->left;
	}
	parent->left = new_left;
	return (new_left);
}
