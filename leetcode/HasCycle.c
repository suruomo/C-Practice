#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};
/**
 * �жϸ������������Ƿ��л�������л��򷵻�true�����򷵻�false��
 * @param head ListNode��
 * @return bool������
 */
bool hasCycle(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast != NULL && slow != NULL)
    {
        if (fast->next != NULL)
        {
            fast = fast->next->next; //��ָ��ÿ��2��
        }
        else
        {
            return false;
        }
        slow = slow->next; //��ָ��ÿ��1��
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}