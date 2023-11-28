#include "binary_trees.h"
/**
 * binary_tree_preorder -goes thru a binary tree by pre-order
 * preoreder traversal is  the root node,left subtree,right subtree.
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * Return: return binary tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
return;
if (func == NULL)
return;
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
