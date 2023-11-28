#include "binary_trees.h"
/**
 * binary_tree_uncle - find the uncle of the node
 * @node:  pointer to the node to find the uncle
 * Return:  pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);
if (node->parent == node->parent->parent->right)
return (node->parent->parent->left);
return (node->parent->parent->right);
}
