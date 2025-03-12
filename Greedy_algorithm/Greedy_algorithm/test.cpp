#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//将数组和减半的最少操作次数（medium）
//class Solution {
//public:
//    int halveArray(vector<int>& nums) {
//        priority_queue<double> heap;
//        double sum = 0;
//        for (auto i : nums) {
//            sum += i;
//            heap.emplace(i);
//        }
//
//        int ret = 0;
//        double aim = sum / 2;
//        while (sum > aim) {
//            ret++;
//            double top = heap.top() / 2;
//            sum -= top;
//            heap.pop();
//            heap.emplace(top);
//        }
//
//        return ret;
//    }
//};
//柠檬水找零（easy）
//class Solution {
//public:
//    bool lemonadeChange(vector<int>& bills) {
//        int five = 0, ten = 0;
//        for (auto i : bills) {
//            if (i == 5) five++;
//            if (i == 10) {
//                if (five == 0) return false;
//                else {
//                    five--;
//                    ten++;
//                }
//            }
//            if (i == 20) {
//                if (ten && five) {
//                    ten--;
//                    five--;
//                }
//                else if (five >= 3) {
//                    five -= 3;
//                }
//                else return false;
//            }
//        }
//        return true;
//    }
//};
//int main() {
//    Solution s;
//    vector<int> bills = { 5,5,5,5,10,5,10,10,10,20 };
//    cout << s.lemonadeChange(bills) << endl;
//    return 0;
//}