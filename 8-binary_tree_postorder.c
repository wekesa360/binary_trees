#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using postorder traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function
 *  
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tre, void (*func)(int)){

    if(tre == NULL || func == NULL)
        return;
    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}
