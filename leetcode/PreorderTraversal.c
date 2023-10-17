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
  * ����������ĸ��ڵ� root ���������ڵ�ֵ�� ǰ�� ������  ----�ݹ�
  *
  *
  * @param root TreeNode��
  * @return int����һά����
  * @return int* returnSize ������������
  */
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    pre(root);
    *returnSize = i;
    return a;
}

/**
  * ǰ�����
  *
  * @param root TreeNode��
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
 * ����������ĸ��ڵ� root ���������ڵ�ֵ�� ǰ�� ������  ----�ǵݹ�
 *
 *
 * @param root TreeNode��
 * @return int����һά����
 * @return int* returnSize ������������
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