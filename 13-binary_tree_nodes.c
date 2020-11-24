#include "binary_trees.h"
/**
* binary_tree_nodes - counts the nodes with at least 1 child in BT
* @tree: ptr to the root node of BT to count the number of nodes
* Return: numbers of leave. If tree is NULL, return 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
	{
		return (0);
	}
	if ((tree->left) || (tree->right))
	{
		nodes = 1;
	}
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
