#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

/**
 * ����һ���������жϸ������Ƿ�Ϊ���Ľṹ��
 *
 *
 * @param head ListNode�� the head
 * @return bool������
 */
bool isPail(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
    {
        return true;
    }

    struct ListNode* pre = NULL;
    struct ListNode* next = NULL;
    struct ListNode* cur = head;

    while (cur)
    {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    while (head && pre)
    {
        if (head->val == pre->val)
        {
            head = head->next;
            pre = pre->next;
        }
        else {
            return false;
        }
    }
        return true;  
}