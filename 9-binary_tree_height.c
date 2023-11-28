#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check node leaf or not
 * @node: node to check
 * Return: 1 if node if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);
else if (node->left == NULL && node->right == NULL)
return (1);
return (0);
}
/**
 * binary_tree_height -measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure height.
 * Return: return binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftnode, rightnode;
if (tree == NULL || binary_tree_is_leaf(tree))
return (0);
leftnode = binary_tree_height(tree->left);
rightnode = binary_tree_height(tree->right);
if (rightnode <= leftnode)
return (leftnode + 1);
return (rightnode + 1);
}
