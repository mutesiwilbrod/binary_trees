#include "binary_trees.h"
/**
 * binary_tree_insert_right -inserts node as the right-child of another node
 * @parent: root node of the tree
 * @value: the value in the root note
 * Return: binary tree or NULL on fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *temp;
/* return pointer to created node, or NULL on failure or if parent is NULL */
if (parent == NULL)
return (NULL);
/* create tree */
temp = binary_tree_node(parent, value);
if (temp == NULL)
return (NULL);
/* go to right */
temp->right = parent->right;
/* If parent already has a right-child, the new node must take its place */
/* and the old right-child must be set as the right-child of the new node */
if (temp->right != NULL)
{
temp->right->parent = temp;
}
parent->right = temp;
return (temp);
}
