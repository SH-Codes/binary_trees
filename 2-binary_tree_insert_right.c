#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child
 * of another node in a binary tree.
 *
 * @parent: A pointer to the node to insert the right child in.
 *
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 * Otherwise - a pointer to the new node.
 *
 * Description: If parent is NULL or if memory allocation fails,
 * returns NULL.
 * If parent already has a right child, the new node
 * replaces it, and the old right child becomes the
 * right child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
