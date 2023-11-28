#include "binary_trees.h"
/**
 * binary_tree_inorder -goes thru a binary tree by in-order
 * in-order traversal is  the left subtree,root node,right subtree.
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * Return: return binary tree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
return;
if (func == NULL)
return;
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
