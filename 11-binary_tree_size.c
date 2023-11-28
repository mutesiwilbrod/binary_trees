#include "binary_trees.h"
/**
 * binary_tree_size -measures the size of a binary tree
 * @tree: pointer to root node of the tree to measure the size
 * Return: return binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t leftnode, rightnode;
if (tree == NULL)
return (0);
leftnode = binary_tree_size(tree->left);
rightnode = binary_tree_size(tree->right);
return (rightnode + 1 + leftnode);
}
