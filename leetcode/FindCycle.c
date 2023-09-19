#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};
//给一个长度为n链表，若其中包含环，请找出该链表的环的入口结点，否则，返回null。
struct ListNode* EntryNodeOfLoop(struct ListNode* pHead) {
    struct ListNode* fast = pHead;
    struct ListNode* slow = pHead;

    while (fast && fast->next && fast->next->next) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            fast = pHead;
            while (fast != slow) {
                fast = fast->next;
                slow = slow->next;
            }
            return fast;
        }
    }
    return NULL;
}