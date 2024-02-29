#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 *                            of another in a binary tree.
 * @node: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If node is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If node already has a right-child, the new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *node, int value)
{
	binary_tree_t *new_node;

	if (node == NULL)
		return (NULL);

	new_node = binary_tree_node(node, value);

	if (new_node == NULL)
		return (NULL);

	if (node->right != NULL)
	{
		new_node->right = node->right;
		node->right->parent = new_node;
	}

	node->right = new_node;
	return (new_node);
}

