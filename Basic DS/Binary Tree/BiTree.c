/*
 * Abstract Data Structure: Binary Tree
 * Author: Progyan Bhattacharya <progyanb@acm.org>
 * Repo: Design-And-Analysis-of-Algorithm [MIT LICENSE]
 */

#include "BiTree.h"

static int preIndex = 0;

static Node_t* _CreateNode(int data) {
    Node_t* node = malloc(sizeof(Node_t));
    node->data = data, node->left = node->right = NULL;
    return node;
}

static int _search(int n, int Traversal[n], int start, int end, int value) {
    for (int i = start; i <= end; i++) {
        if (Traversal[i] == value) {
            return i;
        }
    }
    return -1;
}

static Node_t* _CreateBiTree(int n, int PreOrder[n], int InOrder[n], int start, int end) {
    if (n == 0 || start > end) {
        return NULL;
    }
    int root_val = PreOrder[preIndex];
    ++preIndex;
    Node_t* root = _CreateNode(root_val);
    if (n == 1 || start == end) {
        return root;
    }
    int inIndex = _search(n, InOrder, start, end, root_val);
    root->left = _CreateBiTree(n, PreOrder, InOrder, start, inIndex - 1);
    root->right = _CreateBiTree(n, PreOrder, InOrder, inIndex + 1, end);
    return root;
}

Node_t* CreateBiTree(int n, int PreOrder[n], int InOrder[n]) {
    return _CreateBiTree(n, PreOrder, InOrder, 0, n - 1);
}

void Trav_postorder(Node_t* root) {
    if (root == NULL) {
        return;
    }
    Trav_postorder(root->left);
    Trav_postorder(root->right);
    printf("%d ", root->data);
}

void Delete(Node_t* root) {
    if (root == NULL) {
        return;
    }
    Delete(root->left);
    Delete(root->right);
    free(root);
}
