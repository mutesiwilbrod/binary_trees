#include "binary_trees.h"
/**
 * binary_tree_heights - measures the hight of the tree
 * @tree:pointer to the root node of the tree
 * Return: 0 if tree is NULL else the hight
 */
int binary_tree_heights(const binary_tree_t *tree)
{
int leftnode, rightnode;
if (tree == NULL)
return (0);
leftnode = binary_tree_heights(tree->left);
rightnode = binary_tree_heights(tree->right);
if (leftnode >= rightnode)
return (leftnode + 1);
return (rightnode + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to root node of the tree to measure the balance factor
 * Return: return balancde factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left, right;
if (tree == NULL)
return (0);
left = binary_tree_heights(tree->left);
right = binary_tree_heights(tree->right);
return (left - right);
}
