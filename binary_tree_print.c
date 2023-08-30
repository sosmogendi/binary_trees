#include "binary_trees.h"

/* Helper function to print binary tree */
static void binary_tree_print_recursive(const binary_tree_t *tree, int level);

/* Function to print binary tree */
void binary_tree_print(const binary_tree_t *tree)
{
    binary_tree_print_recursive(tree, 0);
}

/* Helper function to print binary tree */
static void binary_tree_print_recursive(const binary_tree_t *tree, int level)
{
    if (tree == NULL)
        return;

    binary_tree_print_recursive(tree->right, level + 1);

    for (int i = 0; i < level; i++)
        printf("   ");

    printf("%c--(%03d)--\n", level > 0 ? '|':' ', tree->n);

    binary_tree_print_recursive(tree->left, level + 1);
}
