#include<iostream>
using namespace std;




///**K个一组翻转链表（hard）
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
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        int count = 0, num = 0;
//        ListNode* cur = head;
//        while (cur) {
//            cur = cur->next;
//            count++;
//        }
//        count /= k;
//        ListNode* newhead = new ListNode;
//        ListNode* prev = newhead, * next = nullptr, * tmp;
//        cur = head;
//        while (count--) {
//            num = k;
//            while (num--) {
//                next = cur->next;
//                tmp = prev->next;
//
//                cur->next = tmp;
//                prev->next = cur;
//
//                cur = next;
//            }
//            while (prev->next) {
//                prev = prev->next;
//            }
//        }
//
//        prev->next = cur;
//
//        cur = newhead->next;
//        delete newhead;
//
//        return cur;
//    }
//};

///**翻转对（hard）
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
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        return mergeSort(lists, 0, lists.size() - 1);
//    }
//
//    ListNode* mergeSort(vector<ListNode*>& lists, int left, int right)
//    {
//        if (left > right) return nullptr;
//        if (left == right) return lists[left];
//        // 1. 根据中间元素，将区间分成两部分
//        int mid = (left + right) >> 1;
//        // [left, mid] [mid + 1, right]
//
//        ListNode* cur1 = mergeSort(lists, left, mid);
//        ListNode* cur2 = mergeSort(lists, mid + 1, right);
//
//        ListNode* newhead = new ListNode;
//        ListNode* newtail = newhead;
//
//        while (cur1 != nullptr && cur2 != nullptr)
//        {
//            if (cur1->val < cur2->val) {
//                newtail->next = cur1;
//                newtail = cur1;
//                cur1 = cur1->next;
//            }
//            else {
//                newtail->next = cur2;
//                newtail = cur2;
//                cur2 = cur2->next;
//            }
//        }
//        if (cur1) {
//            newtail->next = cur1;
//        }
//        if (cur2) {
//            newtail->next = cur2;
//        }
//
//        cur1 = newhead->next;
//        delete newhead;
//        return cur1;
//    }
//};

//class Solution
//{
//	int[] tmp;
//	public int reversePairs(int[] nums)
//	{
//		int n = nums.length;
//		tmp = new int[n];
//		return mergeSort(nums, 0, n - 1);
//	}
//	public int mergeSort(int[] nums, int left, int right)
//	{
//		if (left >= right) return 0;
//		int ret = 0;
//		// 1. 根据中间元素，将区间分成两部分
//		int mid = (left + right) / 2;
//		// [left, mid] [mid + 1, right]
//		// 2. 求出左右两个区间的翻转对
//		ret += mergeSort(nums, left, mid);
//		ret += mergeSort(nums, mid + 1, right);
//		// 3. 处理一左一右 - 先计算翻转对
//		int cur1 = left, cur2 = mid + 1, i = left;
//		// 降序版本
//		while (cur1 <= mid)
//		{
//			while (cur2 <= right && nums[cur2] >= nums[cur1] / 2.0) cur2++;
//			if (cur2 > right)
//				break;
//			ret += right - cur2 + 1;
//			cur1++;
//		}
//		// 4. 合并两个有序数组
//		cur1 = left; cur2 = mid + 1;
//		while (cur1 <= mid && cur2 <= right)
//			tmp[i++] = nums[cur1] <= nums[cur2] ? nums[cur2++] : nums[cur1++];
//		while (cur1 <= mid) tmp[i++] = nums[cur1++];
//		while (cur2 <= right) tmp[i++] = nums[cur2++];
//		for (int j = left; j <= right; j++)
//			nums[j] = tmp[j];
//		return ret;
//	}
//}

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