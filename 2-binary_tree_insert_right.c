#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node on right of Binary tree
* @parent: ptr parent node
* @value: key to insert
* Return: address of the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right = NULL;

	if (!parent)
	{
		return (NULL);
	}
	new_right = binary_tree_node(parent, value);
	if (!new_right)
	{
		return (NULL);
	}
	if (parent->right)
	{
		parent->right->parent = new_right;
		new_right->right = parent->right;
	}
	parent->right = new_right;
	return (new_right);
}
