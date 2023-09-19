#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};
/**
 * 判断给定的链表中是否有环。如果有环则返回true，否则返回false。
 * @param head ListNode类
 * @return bool布尔型
 */
bool hasCycle(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast != NULL && slow != NULL)
    {
        if (fast->next != NULL)
        {
            fast = fast->next->next; //快指针每次2步
        }
        else
        {
            return false;
        }
        slow = slow->next; //慢指针每次1步
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}