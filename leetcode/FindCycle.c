#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};
//��һ������Ϊn���������а����������ҳ�������Ļ�����ڽ�㣬���򣬷���null��
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