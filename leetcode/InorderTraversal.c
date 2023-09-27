#include<stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

void inOrder(struct TreeNode* root);
int i = 0;
int a[];
/**
 * 给定一个二叉树的根节点root，返回它的中序遍历结果。 -------递归
 *
 * @param root TreeNode类
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    inOrder(root);
    *returnSize = i;
    return a;
}

void inOrder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    a[i++] = root->val;
    inOrder(root->right);
}

/**
 * 给定一个二叉树的根节点root，返回它的中序遍历结果。  非递归
 *
 * @param root TreeNode类
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 */
int* inorderTraversal1(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    if (root == NULL)
        return NULL;
    struct TreeNode* stack[2000];
    int* res = (int*)calloc(2000, sizeof(int));
    int top = 0;
    while (top > 0 || root != NULL) {
        while (root != NULL) {
            stack[top++] = root;
            root = root->left;
        }
        res[(*returnSize)++] = stack[top - 1]->val;
        root = stack[--top]->right;
    }
    return res;
}