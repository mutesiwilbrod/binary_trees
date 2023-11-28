#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: root node of the tree
 * @value: the value in the root note
 * Return: binary tree or NULL on fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *temp;
/* return pointer to created node, or NULL on failure or if parent is NULL */
if (parent == NULL)
return (NULL);
/* create tree */
temp = binary_tree_node(parent, value);
if (temp == NULL)
return (NULL);
/* go to left */
temp->left = parent->left;
if (temp->left != NULL)
{
temp->left->parent = temp;
}
parent->left = temp;
return (temp);
}
