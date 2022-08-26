#include "binary_trees.h"
/**
 * binary_tree_nodes - measures the nodes of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (nodes + 1);
}
