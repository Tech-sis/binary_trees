#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses a binary tree using preorder traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to the function to call on each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
