#include<iostream>
#include<queue> 


using namespace std;


//数据流中的第 K 大元素（easy）
//class KthLargest {
//
//    priority_queue<int, vector<int>, greater<int>> heap;
//    int _k;
//public:
//    KthLargest(int k, vector<int>& nums) {
//        _k = k;
//        for (auto i : nums) {
//            heap.emplace(i);
//            if (heap.size() > _k) heap.pop();
//        }
//    }
//
//    int add(int val) {
//        heap.emplace(val);
//        if (heap.size() > _k) heap.pop();
//        return heap.top();
//    }
//
//};
//
///**
// * Your KthLargest object will be instantiated and called as such:
// * KthLargest* obj = new KthLargest(k, nums);
// * int param_1 = obj->add(val);
// */
//
//int main() {
//    vector<int> nums = { 4, 5, 8, 2 };
//    KthLargest k({ 3,  nums});
//	k.add(3);   // returns 4
//	k.add(5);   // returns 5    
//	k.add(10);  // returns 5    
//	k.add(9);   // returns 8    
//	k.add(4);   // returns 8
//	return 0;
//}


//最后一块石头的重量（easy）
//class Solution {
//public:
//    int lastStoneWeight(vector<int>& stones) {
//        priority_queue<int> pq;
//        for (auto i : stones) pq.emplace(i);
//
//        while (pq.size() > 1) {
//            int a = pq.top();
//            pq.pop();
//            int b = pq.top();
//            pq.pop();
//            if (a != b) pq.emplace(abs(a - b));
//        }
//        return pq.size() == 1 ? pq.top() : 0;
//    }
//};