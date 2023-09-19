#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

/**
 * 输入一个长度为 n 的链表，设链表中的元素的值为 ai ，返回该链表中倒数第k个节点。
 * 如果该链表长度小于k，请返回一个长度为 0 的链表。
 *
 *
 * @param pHead ListNode类
 * @param k int整型
 * @return ListNode类
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