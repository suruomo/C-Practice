#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

/**
 * ����һ������Ϊ n �������������е�Ԫ�ص�ֵΪ ai �����ظ������е�����k���ڵ㡣
 * �����������С��k���뷵��һ������Ϊ 0 ������
 *
 *
 * @param pHead ListNode��
 * @param k int����
 * @return ListNode��
 */
struct ListNode* FindKthToTail(struct ListNode* pHead, int k) {
    struct ListNode* fast = pHead;
    struct ListNode* slow = pHead;
    for (int i = 0; i < k; i++) {
        if (fast == NULL) {
            return NULL;
        }
        fast = fast->next;
    }
    while (fast) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}