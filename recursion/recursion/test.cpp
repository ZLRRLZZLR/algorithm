#include<iostream>
#include<string>
#include<vector>
using namespace std;


///**两两交换链表中的节点（medium）
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
//        if (head == nullptr || head->next == nullptr)
//            return head;
//        ListNode* tmp = swapPairs(head->next->next);
//        ListNode* l2 = head->next, * l1 = head;
//        l2->next = head;
//        l1->next = tmp;
//        return l2;
//    }
//};
///**反转链表（easy）
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
//    ListNode* reverseList(ListNode* head) {
//        if (head == nullptr || head->next == nullptr)
//            return head;
//        ListNode* newhead = reverseList(head->next);
//
//        head->next->next = head;
//        head->next = nullptr;
//
//        return newhead;
//    }
//};
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
//    ListNode* reverseList(ListNode* head) {
//        if (head == nullptr || head->next == nullptr)
//            return head;
//        ListNode* newhead = reverseList(head->next);
//
//        head->next->next = head;
//        head->next = nullptr;
//
//        return newhead;
//    }
//};
//合并两个有序链表（easy）
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
//    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//        if (list1 == nullptr) return list2;
//        if (list2 == nullptr) return list1;
//
//        if (list1->val < list2->val) {
//            list1->next = mergeTwoLists(list1->next, list2);
//            return list1;
//        }
//        else {
//            list2->next = mergeTwoLists(list2->next, list1);
//            return list2;
//        }
//        return nullptr;
//    }
//};
//汉诺塔 （easy）
//class Solution {
//public:
//    void dfs(vector<int>& x, vector<int>& y, vector<int>& z, int n) {
//        if (n == 1) {
//            z.push_back(x.back());
//            x.pop_back();
//            return;
//        }
//        dfs(x, z, y, n - 1);
//        z.push_back(x.back());
//        x.pop_back();
//        dfs(y, x, z, n - 1);
//    }
//    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
//        dfs(A, B, C, A.size());
//    }
//};
//
//int main() {
//    vector<int> A = { 2, 1, 0 }, B, C;
//    Solution().hanota(A,B,C);
//    return 0;
//}