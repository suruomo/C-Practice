#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

/**
 * 输入两个无环的单向链表，找出它们的第一个公共结点，如果没有公共节点则返回空。
 * @param pHead1 ListNode类
 * @param pHead2 ListNode类
 * @return ListNode类
 */
struct ListNode* FindFirstCommonNode(struct ListNode* pHead1, struct ListNode* pHead2) {
    struct ListNode* pt1 = pHead1;
    struct ListNode* pt2 = pHead2;
    while (pt1 != pt2)
    {
        pt1 = (pt1 == NULL) ? pHead2 : pt1->next;
        pt2 = (pt2 == NULL) ? pHead1 : pt2->next;
    }
    return pt1;
}