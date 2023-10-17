#include<stdlib.h>

 struct TreeNode {
 	int val;
 	struct TreeNode *left;
 	struct TreeNode *right;
  };

 void pre(struct TreeNode* root);
 int static i = 0;
 int static a[100];
 /**
  * 给你二叉树的根节点 root ，返回它节点值的 前序 遍历。  ----递归
  *
  *
  * @param root TreeNode类
  * @return int整型一维数组
  * @return int* returnSize 返回数组行数
  */
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    pre(root);
    *returnSize = i;
    return a;
}

/**
  * 前序遍历
  *
  * @param root TreeNode类
  * @return 
  */
void pre(struct TreeNode* root){
    if (root != NULL) {
        a[i++] = root->val;
        pre(root->left);
        pre(root->right);
    }
}

/**
 * 给你二叉树的根节点 root ，返回它节点值的 前序 遍历。  ----非递归
 *
 *
 * @param root TreeNode类
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 */
int* preorderTraversal1(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    if (root == NULL) {
        return;
    }
    struct TreeNode* stack[2000];
    int* res = (int*)malloc(2000 * sizeof(int));
    int top = 0;
    stack[top++] = root;
    while (top != 0 ) {
        while (root != NULL) {
            struct TreeNode* node = stack[top--];
            res[*returnSize++] = node->val;
            if (node->left != NULL) {
                stack[top++] = node->left;
            }
            if (node->right != NULL) {
                stack[top++] = node->right;
            }
        }
    }
    return res;

}