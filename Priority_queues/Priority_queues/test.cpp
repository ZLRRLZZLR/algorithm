#include<iostream>
#include<queue> 


using namespace std;


//前 K 个高频单词 （medium）
//class Solution {
//public:
//    struct Compare {
//        bool operator()(const pair<string, int>& a, const pair<string, int>& b) {
//            if (a.second == b.second) {
//                return a.first < b.first;
//            }
//            return a.second > b.second;
//        }
//    };
//    vector<string> topKFrequent(vector<string>& words, int k) {
//        map<string, int> wordtable;
//        for (auto i : words) {
//            wordtable[i]++;
//        }
//
//        priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> heap;
//        for (auto i : wordtable) {
//            heap.emplace(i);
//            if (heap.size() > k) heap.pop();
//        }
//
//        vector<string> ret(k);
//        for (int i = k - 1; i >= 0; i--) {
//            ret[i] = heap.top().first;
//            heap.pop();
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    struct Compare {
//        bool operator()(const pair<string, int>& a, const pair<string, int>& b) {
//            return a.second > b.second;
//        }
//    };
//    vector<string> topKFrequent(vector<string>& words, int k) {
//        map<string, int> wordtable;
//        for (auto i : words) {
//            wordtable[i]++;
//        }
//        vector<pair<string, int>> tmp(wordtable.begin(), wordtable.end());
//        stable_sort(tmp.begin(), tmp.end(), Compare());
//        vector<string> ret;
//        for (int i = 0; i < k; i++) {
//            ret.emplace_back(tmp[i].first);
//        }
//        return ret;
//    }
//};
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