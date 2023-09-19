#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};
/**
 * ����һ������ɾ������ĵ����� n ���ڵ㲢���������ͷָ��
 *
 *
 * @param head ListNode��
 * @param n int����
 * @return ListNode��
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* phead = (struct ListNode*)malloc(sizeof(struct ListNode)); //��������ͷ���
    phead->next = head;

    //����ָ��
    struct ListNode* fast = phead;
    struct ListNode* slow = phead;

    for (int i = 0; i < n; ++i)
    {
        fast = fast->next;
    }

    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = slow->next->next;
    return phead->next;
}