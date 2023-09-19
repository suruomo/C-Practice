#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2);
/**
 * ��������������������������ĳ���Ϊn���ϲ�����������ʹ�������еĽڵ���Ȼ�ǵ�������ġ�
 *
 * @param pHead1 ListNode��
 * @param pHead2 ListNode��
 * @return ListNode��
 */
struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2) {
	// write code here
	if (pHead1 == NULL && pHead2 == NULL)
	{
		return pHead1;
	}

	struct ListNode* pt1 = pHead1;
	struct ListNode* pt2 = pHead2;
	struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* cur = temp;

	while (pt1 && pt2)
	{
		if (pt1->val < pt2->val)
		{
			cur->next = pt1;
			pt1 = pt1->next;
		}
		else
		{
			cur->next = pt2;
			pt2 = pt2->next;
		}
		cur = cur->next;
	}
	cur->next = (pt1 == NULL ? pt2 : pt1);
	return temp->next;
}