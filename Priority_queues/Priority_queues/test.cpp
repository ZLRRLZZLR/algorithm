

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