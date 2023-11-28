#include "binary_trees.h"
/**
 * binary_tree_delete -function that deletes an entire binary tree
 * @tree: a pointer to z root node of the tree to delete
 * Return: binary tree or NULL on fail
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;
/* first delete both subtrees */
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
/* then delete the node */
free(tree);
}
