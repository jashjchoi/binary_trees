#include "binary_trees.h"
/**
* n_depth - count the levels of the Binary tree
* @tree: ptr to the node to measure the depth
* Return: none
*/
size_t n_depth(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (1 + n_depth(tree->parent));
}
/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: ptr to the node to measure the depth
* Return: if tree is NULL, return 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (n_depth(tree) - 1);
}
