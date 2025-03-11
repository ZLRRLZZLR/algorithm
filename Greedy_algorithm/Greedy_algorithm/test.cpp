#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//ÄûÃÊË®ÕÒÁã£¨easy£©
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