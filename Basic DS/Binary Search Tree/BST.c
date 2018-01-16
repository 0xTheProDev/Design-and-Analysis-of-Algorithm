/*
 * Abstract Data Structure: Binary Search Tree
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "BST.h"

static Node_t* Node(int data) {
    Node_t* node = malloc(sizeof(Node_t));
    node->data = data, node->count = 1;
    node->left = node->right = NULL;
    return node;
}

Node_t* Insert(Node_t* root, int data) {
    if (root == NULL) {
        return Node(data);
    }
    if (root->data == data) {
        root->count += 1;
    } else if (root->data > data) {
        root->left = Insert(root->left, data);
    } else {
        root->right = Insert(root->right, data);
    }
    return root;
}

Node_t* Search(Node_t* root, int data) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == data) {
        return root;
    } else if (root->data > data) {
        return Search(root->left, data);
    }
    return Search(root->left, data);
}

Node_t* Remove(Node_t* root, int data) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data > data) {
        root->left = Remove(root->left, data);
    } else if (root->data < data) {
        root->right = Remove(root->right, data);
    } else {
        if (root->count > 1) {
            root->count -= 1;
        } else if (root->left == NULL && root->right == NULL) {
            free(root);
            root = NULL;
        } else {
            Node_t* node = root->right == NULL ? root->left : root->right;
            root->data = node->data;
            root->count = node->count;
            root->left = node->left;
            root->right = node->right;
            free(node);
        }
    }
    return root;
}

void Traverse(Node_t* root) {
    if (root == NULL) {
        return;
    }
    Traverse(root->left);
    for (int i = 0; i < root->count; i++) {
        printf("%d ", root->data);
    }
    Traverse(root->right);
}

void Drop(Node_t* root) {
    if (root == NULL) {
        return;
    }
    Drop(root->left);
    Drop(root->right);
    free(root);
}
