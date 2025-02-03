

//两两交换链表中的节点（medium）
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//class Solution {
//public:
//    ListNode* swapPairs(ListNode* head) {
//        if (head == NULL || head->next == NULL) return head;
//        ListNode* prev = new ListNode, * cur = head, * next, * nnext, * newhead;
//        prev->next = head;
//        newhead = prev;
//        while (cur != NULL && cur->next != NULL) {
//            next = cur->next;
//            nnext = next->next;
//
//            prev->next = next;
//            next->next = cur;
//            cur->next = nnext;
//
//            prev = cur;
//            cur = nnext;
//        }
//
//        return newhead->next;
//    }
//};