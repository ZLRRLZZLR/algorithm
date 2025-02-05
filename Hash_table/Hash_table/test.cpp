

///**合并 K 个升序链表（hard）
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//struct ListNodeLess {
//    bool operator()(ListNode* node1, ListNode* node2) {
//        return node1->val < node2->val;
//    }
//};
//
//class Solution {
//public:
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        if (lists.size() == 0) return nullptr;
//        if (lists.size() == 1) return lists[0];
//        priority_queue<ListNode*, vector<ListNode*>, ListNodeLess> pq;
//        for (auto node : lists) {
//            while (node) {
//                pq.push(node);
//                node = node->next;
//            }
//        }
//        ListNode* newhead = new ListNode;
//        ListNode* tmp;
//        while (pq.size() != 0) {
//            tmp = newhead->next;
//            newhead->next = pq.top();;
//            pq.top()->next = tmp;
//            pq.pop();
//        }
//        tmp = newhead->next;
//        delete newhead;
//
//        return tmp;
//    }
//};