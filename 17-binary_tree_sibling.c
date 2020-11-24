#include "binary_trees.h"
/**
* binary_tree_sibling - find the sibling of a node
* @node: ptr to the node to find the sibling
* Return: ptr to the sibling node. If node or parent is NULL, return NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
	{
		return (NULL);
	}
	if (node->parent->left != node)
	{
		return (node->parent->left);
	}
	return (node->parent->right);
}
