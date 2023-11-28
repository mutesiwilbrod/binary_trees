#include "binary_trees.h"
/**
 * binary_tree_postorder -goes thru a binary tree by post-order
 * post-order traversal is left subtree,right subtree,root node
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * Return: return binary tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
return;
if (func == NULL)
return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
