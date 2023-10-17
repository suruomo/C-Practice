#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

/**
 * 给定一个链表，请判断该链表是否为回文结构。
 *
 *
 * @param head ListNode类 the head
 * @return bool布尔型
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