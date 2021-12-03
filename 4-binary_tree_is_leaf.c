#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is aleaf
 * @node: pointer to the node to check
 * 
 * Return: 1 if the node is a leaf, and 0 otherwise. If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if(node != NULL && node->left == NULL && node->right == NULL)
        return (1);

    return 0;
}