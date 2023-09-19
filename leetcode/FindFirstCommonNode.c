#include <stdbool.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

/**
 * ���������޻��ĵ��������ҳ����ǵĵ�һ��������㣬���û�й����ڵ��򷵻ؿա�
 * @param pHead1 ListNode��
 * @param pHead2 ListNode��
 * @return ListNode��
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