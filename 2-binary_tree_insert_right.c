#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child
 *                            of another node in a binary tree.
 * @parent: A pointer to the node to insert the right child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a right child, the new node
 *              takes its place and the old right child becomes
 *              the right child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* Create a new node with the given value */

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	/* If parent already has a right child, set it as right child of new node */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/* Set the new node as the right child of the parent */
	parent->right = new_node;

	/* Return the new node*/
	return (new_node);
}
