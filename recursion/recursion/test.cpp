#include<iostream>
#include<string>
#include<vector>
using namespace std;

//ººÅµËþ £¨easy£©
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