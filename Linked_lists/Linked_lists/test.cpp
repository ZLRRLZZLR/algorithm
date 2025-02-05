#include<iostream>
using namespace std;


//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
//class Solution {
//public:
//    void reorderList(ListNode* head) {
//        ListNode* cur1 = head;
//        ListNode* slow = head, * fast = head;
//        while (fast && fast->next) {
//            slow = slow->next;
//            fast = fast->next->next;
//        }
//        ListNode* newhead = new ListNode, * cur2 = slow;
//        cur1 = head;
//        while (cur2) {
//            ListNode* tmp = cur2->next;
//            cur2->next = newhead->next;
//            newhead->next = cur2;
//            cur2 = tmp;
//        }
//        cur2 = newhead->next;
//        while (cur1 && cur2) {
//            ListNode* tmp1 = cur1->next;
//            ListNode* tmp2 = cur2->next;
//
//            cur1->next = cur2;
//            cur2->next = tmp1;
//
//            cur2 = tmp2;
//            cur1 = tmp1;
//        }
//        delete newhead;
//    }
//};
//重排链表（medium）
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
//
//class Solution {
//public:
//    void reorderList(ListNode* head) {
//        ListNode* cur1 = head;
//        int count = 0;
//        while (cur1) {
//            cur1 = cur1->next;
//            count++;
//        }
//        ListNode* slow = head, * fast = head;
//        count = count / 2;
//        while (count--) {
//            fast = fast->next;
//        }
//        while (fast && fast->next) {
//            slow = slow->next;
//            fast = fast->next;
//        }
//        ListNode* newhead = new ListNode, * cur2 = slow;
//        cur1 = head;
//        while (cur2) {
//            ListNode* tmp = cur2->next;
//            cur2->next = newhead->next;
//            newhead->next = cur2;
//            cur2 = tmp;
//        }
//        cur2 = newhead->next;
//        while (cur1 && cur2) {
//            ListNode* tmp1 = cur1->next;
//            ListNode* tmp2 = cur2->next;
//
//            cur1->next = cur2;
//            cur2->next = tmp1;
//
//            cur2 = tmp2;
//            cur1 = tmp1;
//        }
//        delete newhead;
//    }
//};


//int main() {
//    ListNode* n1 = new ListNode(1);
//    ListNode* n2 = new ListNode(2);
//    ListNode* n3 = new ListNode(3);
//    ListNode* n4 = new ListNode(4);
//
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//
//    Solution().reorderList(n1);
//    return 0;
//}
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