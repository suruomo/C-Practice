
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
	struct ListNode *next;
 };
 

struct ListNode* ReverseList(struct ListNode* head);


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