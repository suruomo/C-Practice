#include <stdio.h>
#include <stdlib.h>


struct ListNode {
    int val;
    struct ListNode* next;
};


struct ListNode* ReverseList(struct ListNode* head);

/**
 * 给定一个单链表的头结点pHead(该头节点是有值的，比如在下图，它的val是1)，长度为n，反转该链表后，返回新链表的表头。
 *
 *
 * @param head ListNode类
 * @return ListNode类
 */
struct ListNode* ReverseList(struct ListNode* head) {
    // write code here
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode* pre = NULL;
    struct ListNode* next = NULL;
    struct ListNode* cur = head;
    while (cur) {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}