#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};
/**
 * 给定一个链表，删除链表的倒数第 n 个节点并返回链表的头指针
 *
 *
 * @param head ListNode类
 * @param n int整型
 * @return ListNode类
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* phead = (struct ListNode*)malloc(sizeof(struct ListNode)); //设置虚拟头结点
    phead->next = head;

    //快慢指针
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