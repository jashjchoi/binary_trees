#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: ptr to the node to measure the height
* Return: height of BT. If tree is NULL, return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree || (!(tree->left) && !(tree->right)))
	{
		return (0);
	}
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;
	if (left < right)
	{
		return (right);
	}
	else
	{
		return (left);
	}
	return (0);
}
