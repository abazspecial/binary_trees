#include "binary_trees.h"

/**
 * This is a binary_tree_node - Creates a new binary tree node
 *
 * @parent: - is a pointer to the parent node of the node to create
 * @value: - is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 * A binary tree exercise for ALX
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* declaration of the new node with its data type */
	binary_tree_t *newNode;

	/* allocate memory space for that node */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/* This assign values to the properties of the node */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	/* This return a pointer to the node */
	return (newNode);
}
